// Copyright (c) 2021 David Helkowski
// Anti-Corruption License

#include<stdio.h>
#include"mobdev_err.h"

int main() {
    mobdev_err *info = mobdev_geterr( 0xe80000e2 );
    printf("Decode of %x:\n  Name:%s\n  Error:%s\n", info->num, info->name, info->error );        
}