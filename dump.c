// Copyright (c) 2021 David Helkowski
// Anti-Corruption License

#include<stdint.h>
#include<stdio.h>
#include<CoreFoundation/CoreFoundation.h>

extern const char *AMDErrorString( uint32_t error );
extern CFStringRef MISCopyErrorStringForErrorCode( uint32_t error );
CFBundleRef mobDevBundle = NULL;
FILE *outfh;
int outCount = 0;

CFStringRef c2cf( const char *c ) {
    return CFStringCreateWithCString( kCFAllocatorDefault, c, kCFStringEncodingUTF8 );
}

char *cf2c( CFStringRef cf ) {
    int maxLen = CFStringGetMaximumSizeForEncoding( CFStringGetLength( cf ), kCFStringEncodingUTF8 );
    char *c = malloc( maxLen );
    char success = CFStringGetCString( cf, c, maxLen, kCFStringEncodingUTF8 );
    if( !success ) exit(1);
    return c;
}

CFStringRef escape_quotes( CFStringRef in ) {
    CFMutableStringRef copy = CFStringCreateMutableCopy( NULL, 0, in );
    int len = CFStringGetLength( in );
    CFRange range = CFRangeMake( 0, len );
    CFStringFindAndReplace( copy, CFSTR("\""), CFSTR("\\\""), range, 0 );
    return copy;
}

static void print_error( const char *kAMDname, uint32_t i ) {
    CFStringRef kAMDnameCF = c2cf( kAMDname );
    
    CFStringRef errorCF = CFCopyLocalizedStringFromTableInBundle( kAMDnameCF, CFSTR("Localizable"), mobDevBundle, nil );
                             
    char *errorOrig = cf2c( errorCF );
    CFStringRef copy = escape_quotes( errorCF );
    char *error = cf2c( copy );
        
    if( strcmp( kAMDname, errorOrig ) != 0 ) fprintf( outfh, "{ \"%s\", \"%s\", 0x%x },\n", kAMDname, error, i );
    else fprintf( outfh, "{ \"?\", \"%s\", 0x%x },\n", error, i );
    outCount++;
    
    free( error );
    free( errorOrig );
    CFRelease( errorCF );
    CFRelease( kAMDnameCF );
}

static void scan_range( uint32_t from, uint32_t to ) {
    for( uint32_t i = from; i < to; i++ ) {
        const char *kAMDname = AMDErrorString( i );
        if( !kAMDname ) continue;
        print_error( kAMDname, i );
    }
}

static void scan_rangex( uint32_t from, uint32_t to ) {
    for( uint32_t i = from; i < to; i++ ) {
        CFStringRef errorCF = MISCopyErrorStringForErrorCode( i );
        if( !errorCF ) continue;
        if( !CFStringHasPrefix( errorCF, CFSTR("An unexpected error") ) ) {
            CFStringRef copy = escape_quotes( errorCF );
            char *error = cf2c( copy );
            fprintf( outfh, "{ \"?\", \"%s\", 0x%x },\n", error, i );
            outCount++;
            free( error );
        }
        CFRelease( errorCF );
    }
}

int main() {
    CFURLRef mobDevUrl = CFURLCreateWithFileSystemPath( 
        kCFAllocatorDefault,
        CFSTR("/System/Library/PrivateFrameworks/MobileDevice.framework"),
        kCFURLPOSIXPathStyle,
        true
    );
    mobDevBundle = CFBundleCreate( kCFAllocatorDefault, mobDevUrl );
    CFRelease( mobDevUrl );
    
    outfh = fopen( "mobdev_err.h", "w" );
    
    fprintf(outfh,
        "// Copyright (c) 2021 David Helkowski\n"
        "// Anti-Corruption License\n"
        "#ifndef __MOBDEV_ERR\n"
        "#define __MOBDEV_ERR\n"
        "#include<stdint.h>\n"
        "typedef struct {\n"
        "  const char *name;\n"
        "  const char *error;\n"
        "  const uint32_t num;\n"
        "} mobdev_err;\n"
        "static mobdev_err mobdev_errs[] = {\n"
    );
    
    typedef struct error_id_to_message {
	const char* id;
	const char* message;
} error_id_to_message_t;
    
    scan_range( 0, 1 );
    scan_range( 0xe8000001, 0xe8001000 );
    scan_rangex( 0xe8008001, 0xe8009000 );
    fprintf(outfh,
        "{\"end\",\"end\",0xffff}\n};\n"
        "mobdev_err *mobdev_geterr(uint32_t num) {\n"
        "  int errCount = sizeof( mobdev_errs ) / sizeof( mobdev_err );\n"
        "  for( int i=0;i<errCount;i++ ) if( mobdev_errs[i].num == num ) return &mobdev_errs[i];\n"
        "  return NULL;\n"
        "}\n"
        "#endif\n"
    );
    
    printf("Wrote %i errors to mobdev_err.h\n", outCount );
    
    fclose( outfh );
}
