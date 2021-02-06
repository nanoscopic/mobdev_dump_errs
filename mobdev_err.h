// Copyright (c) 2021 David Helkowski
// Anti-Corruption License
// Generated by https://github.com/nanoscopic/mobdev_dump_errs
#ifndef __MOBDEV_ERR
#define __MOBDEV_ERR
#include<stdint.h>
typedef struct {
  const char *name;
  const char *error;
  const uint32_t num;
} mobdev_err;
static mobdev_err mobdev_errs[] = {
{ "kAMDSuccess", "There was no error.", 0x0 },
{ "kAMDUndefinedError", "An unknown error occurred.", 0xe8000001 },
{ "kAMDBadHeaderError", "Could not transfer file.", 0xe8000002 },
{ "kAMDNoResourcesError", "Could not allocate a resource.", 0xe8000003 },
{ "kAMDReadError", "Could not read from the device.", 0xe8000004 },
{ "kAMDWriteError", "Could not write to the device.", 0xe8000005 },
{ "kAMDUnknownPacketError", "The packet is unknown.", 0xe8000006 },
{ "kAMDInvalidArgumentError", "The argument is invalid.", 0xe8000007 },
{ "kAMDNotFoundError", "The file could not be found.", 0xe8000008 },
{ "kAMDIsDirectoryError", "The path is a directory.", 0xe8000009 },
{ "kAMDPermissionError", "You do not have permission.", 0xe800000a },
{ "kAMDNotConnectedError", "Not connected to the device.", 0xe800000b },
{ "kAMDTimeOutError", "The operation timed out.", 0xe800000c },
{ "kAMDOverrunError", "There was a buffer overrun.", 0xe800000d },
{ "kAMDEOFError", "End of file.", 0xe800000e },
{ "kAMDUnsupportedError", "This operation is unsupported.", 0xe800000f },
{ "kAMDFileExistsError", "The file already exists.", 0xe8000010 },
{ "kAMDBusyError", "The device is busy.", 0xe8000011 },
{ "kAMDCryptoError", "Could not establish a secure connection to the device.", 0xe8000012 },
{ "kAMDInvalidResponseError", "Received an unexpected response from the device.", 0xe8000013 },
{ "kAMDMissingKeyError", "The key is missing.", 0xe8000014 },
{ "kAMDMissingValueError", "The value is missing.", 0xe8000015 },
{ "kAMDGetProhibitedError", "Cannot retrieve value from the passcode locked device.", 0xe8000016 },
{ "kAMDSetProhibitedError", "Cannot set value on device.", 0xe8000017 },
{ "kAMDRemoveProhibitedError", "Cannot remove value on device.", 0xe8000018 },
{ "kAMDImmutableValueError", "This value cannot be changed.", 0xe8000019 },
{ "kAMDPasswordProtectedError", "The device is passcode protected.", 0xe800001a },
{ "kAMDMissingHostIDError", "The device does not recognize this host.", 0xe800001b },
{ "kAMDInvalidHostIDError", "The device does not recognize this host.", 0xe800001c },
{ "kAMDSessionActiveError", "The session is active.", 0xe800001d },
{ "kAMDSessionInactiveError", "The session is inactive.", 0xe800001e },
{ "kAMDMissingSessionIDError", "The session ID is missing.", 0xe800001f },
{ "kAMDInvalidSessionIDError", "The session ID is invalid.", 0xe8000020 },
{ "kAMDMissingServiceError", "The service is missing.", 0xe8000021 },
{ "kAMDInvalidServiceError", "The service is invalid.", 0xe8000022 },
{ "kAMDInvalidCheckinError", "Could not start service on device", 0xe8000023 },
{ "kAMDCheckinTimeoutError", "The service did not start properly on the device.", 0xe8000024 },
{ "kAMDMissingPairRecordError", "The host is not paired with the device.", 0xe8000025 },
{ "kAMDInvalidActivationRecordError", "The activation record is not valid.", 0xe8000026 },
{ "kAMDMissingActivationRecordError", "The activation record could not be found.", 0xe8000027 },
{ "kAMDWrongDroidError", "The device is in recovery mode.", 0xe8000028 },
{ "kAMDSUVerificationError", "The software update package could not be verified.", 0xe8000029 },
{ "kAMDSUPatchError", "Could not patch the file.", 0xe800002a },
{ "kAMDSUFirmwareError", "Could not flash the firmware.", 0xe800002b },
{ "kAMDProvisioningProfileNotValid", "The provisioning profile is not valid.", 0xe800002c },
{ "kAMDSendMessageError", "Could not send a message to the device.", 0xe800002d },
{ "kAMDReceiveMessageError", "Could not receive a message from the device.", 0xe800002e },
{ "kAMDMissingOptionsError", "The options are missing.", 0xe800002f },
{ "kAMDMissingImageTypeError", "The image is missing.", 0xe8000030 },
{ "kAMDDigestFailedError", "Could not read disk image.", 0xe8000031 },
{ "kAMDStartServiceError", "The service could not be started.", 0xe8000032 },
{ "kAMDInvalidDiskImageError", "The disk image is invalid.", 0xe8000033 },
{ "kAMDMissingDigestError", "The digest is missing.", 0xe8000034 },
{ "kAMDMuxError", "There was an error with the USB device multiplexor.", 0xe8000035 },
{ "kAMDApplicationAlreadyInstalledError", "A system application with the given bundle identifier is already installed on the device and cannot be replaced.", 0xe8000036 },
{ "kAMDApplicationMoveFailedError", "The application could not be moved into place on the device.", 0xe8000037 },
{ "?", "kAMDApplicationSINFCaptureFailedError", 0xe8000038 },
{ "kAMDApplicationSandboxFailedError", "The application could not be sandboxed.", 0xe8000039 },
{ "kAMDApplicationVerificationFailedError", "The application could not be verified.", 0xe800003a },
{ "kAMDArchiveDestructionFailedError", "Could not remove the application archive.", 0xe800003b },
{ "kAMDBundleVerificationFailedError", "The carrier bundle could not be verified.", 0xe800003c },
{ "kAMDCarrierBundleCopyFailedError", "Could not install the carrier bundle.", 0xe800003d },
{ "kAMDCarrierBundleDirectoryCreationFailedError", "Could not create the carrier bundle directory.", 0xe800003e },
{ "kAMDCarrierBundleMissingSupportedSIMsError", "There are no supported SIMs for this carrier bundle.", 0xe800003f },
{ "kAMDCommCenterNotificationFailedError", "Could not listen for notification from the baseband.", 0xe8000040 },
{ "kAMDContainerCreationFailedError", "Could not create application container.", 0xe8000041 },
{ "kAMDContainerP0wnFailedError", "Could not repair permissions on application container.", 0xe8000042 },
{ "kAMDContainerRemovalFailedError", "Could not remove the application container.", 0xe8000043 },
{ "kAMDEmbeddedProfileInstallFailedError", "Could not install the embedded provisioning profile.", 0xe8000044 },
{ "kAMDErrorError", "An error occurred.", 0xe8000045 },
{ "kAMDExecutableTwiddleFailedError", "Could not change executable permissions on the application.", 0xe8000046 },
{ "kAMDExistenceCheckFailedError", "Could not check to see if the application already exists.", 0xe8000047 },
{ "kAMDInstallMapUpdateFailedError", "Could not update the installed applications list.", 0xe8000048 },
{ "kAMDManifestCaptureFailedError", "Could not save the application manifest.", 0xe8000049 },
{ "kAMDMapGenerationFailedError", "Could not generate the map.", 0xe800004a },
{ "kAMDMissingBundleExecutableError", "The application bundle does not contain an executable.", 0xe800004b },
{ "kAMDMissingBundleIdentifierError", "The application bundle does not contain a valid identifier.", 0xe800004c },
{ "kAMDMissingBundlePathError", "Could not determine the application bundle path.", 0xe800004d },
{ "kAMDMissingContainerError", "Could not find the container for the installed application.", 0xe800004e },
{ "kAMDNotificationFailedError", "Could not post a notification.", 0xe800004f },
{ "kAMDPackageExtractionFailedError", "Could not open the application package.", 0xe8000050 },
{ "kAMDPackageInspectionFailedError", "Could not inspect the application package.", 0xe8000051 },
{ "kAMDPackageMoveFailedError", "Could not move the application package into the staging location.", 0xe8000052 },
{ "kAMDPathConversionFailedError", "Could not convert the path.", 0xe8000053 },
{ "kAMDRestoreContainerFailedError", "Could not restore the application container.", 0xe8000054 },
{ "kAMDSeatbeltProfileRemovalFailedError", "Could not remove the application seatbelt profile.", 0xe8000055 },
{ "kAMDStageCreationFailedError", "Could not create the staging directory.", 0xe8000056 },
{ "kAMDSymlinkFailedError", "Could not create the symlink.", 0xe8000057 },
{ "kAMDiTunesArtworkCaptureFailedError", "Could not save the iTunes artwork.", 0xe8000058 },
{ "kAMDiTunesMetadataCaptureFailedError", "Could not save the iTunes metadata.", 0xe8000059 },
{ "kAMDAlreadyArchivedError", "The application is already archived.", 0xe800005a },
{ "kAMDServiceLimitError", "Too many instances of this service are already running.", 0xe800005b },
{ "kAMDInvalidPairRecordError", "The host is no longer paired with the device.", 0xe800005c },
{ "kAMDServiceProhibitedError", "The service could not be started on the device.", 0xe800005d },
{ "kAMDCheckinSetupFailedError", "Could not start service on device", 0xe800005e },
{ "kAMDCheckinConnectionFailedError", "The service did not start properly on the device.", 0xe800005f },
{ "kAMDCheckinReceiveFailedError", "The service did not start properly on the device.", 0xe8000060 },
{ "kAMDCheckinResponseFailedError", "The service did not start properly on the device.", 0xe8000061 },
{ "kAMDCheckinSendFailedError", "The service did not start properly on the device.", 0xe8000062 },
{ "kAMDMuxCreateListenerError", "Could not listen for USB devices.", 0xe8000063 },
{ "kAMDMuxGetListenerError", "Could not get the USB listener.", 0xe8000064 },
{ "kAMDMuxConnectError", "Could not connect to the device.", 0xe8000065 },
{ "kAMDUnknownCommandError", "The device does not recognize the command.", 0xe8000066 },
{ "kAMDAPIInternalError", "There was an internal API error.", 0xe8000067 },
{ "kAMDSavePairRecordFailedError", "Could not save the pairing record.", 0xe8000068 },
{ "kAMDCheckinOutOfMemoryError", "The service did not start properly on the device.", 0xe8000069 },
{ "kAMDDeviceTooNewError", "This application needs to be updated.", 0xe800006a },
{ "kAMDDeviceRefNoGood", "This device is no longer connected.", 0xe800006b },
{ "kAMDCannotTranslateError", "Could not translate messages from device", 0xe800006c },
{ "kAMDMobileImageMounterMissingImageSignature", "Could not support development.", 0xe800006d },
{ "kAMDMobileImageMounterResponseCreationFailed", "Could not support development.", 0xe800006e },
{ "kAMDMobileImageMounterMissingImageType", "Could not support development.", 0xe800006f },
{ "kAMDMobileImageMounterMissingImagePath", "Could not support development.", 0xe8000070 },
{ "kAMDMobileImageMounterImageMapLoadFailed", "Could not support development.", 0xe8000071 },
{ "kAMDMobileImageMounterAlreadyMounted", "Image is already mounted.", 0xe8000072 },
{ "kAMDMobileImageMounterImageMoveFailed", "Could not support development.", 0xe8000073 },
{ "kAMDMobileImageMounterMountPathMissing", "Could not support development.", 0xe8000074 },
{ "kAMDMobileImageMounterMountPathNotEmpty", "Could not support development.", 0xe8000075 },
{ "kAMDMobileImageMounterImageMountFailed", "Could not support development.", 0xe8000076 },
{ "kAMDMobileImageMounterTrustCacheLoadFailed", "Could not support development.", 0xe8000077 },
{ "kAMDMobileImageMounterDigestFailed", "Could not support development.", 0xe8000078 },
{ "kAMDMobileImageMounterDigestCreationFailed", "Could not support development.", 0xe8000079 },
{ "kAMDMobileImageMounterImageVerificationFailed", "Could not support development.", 0xe800007a },
{ "kAMDMobileImageMounterImageInfoCreationFailed", "Could not support development.", 0xe800007b },
{ "kAMDMobileImageMounterImageMapStoreFailed", "Could not support development.", 0xe800007c },
{ "?", "kAMDBonjourSetupError", 0xe800007d },
{ "kAMDDeviceOSVersionTooLow", "The device OS version is too low.", 0xe800007e },
{ "kAMDNoWifiSyncSupportError", "Device doesn’t support wireless sync.", 0xe800007f },
{ "kAMDDeviceFamilyNotSupported", "This application does not support this kind of device.", 0xe8000080 },
{ "kAMDEscrowLockedError", "Device is not available until first unlock after boot.", 0xe8000081 },
{ "kAMDPairingProhibitedError", "Pairing only allowed over USB.", 0xe8000082 },
{ "kAMDProhibitedBySupervision", "Operation prohibited on supervised devices.", 0xe8000083 },
{ "kAMDDeviceDisconnectedError", "This device is no longer connected.", 0xe8000084 },
{ "kAMDTooBigError", "The message is too big.", 0xe8000085 },
{ "kAMDPackagePatchFailedError", "Could not apply patch update to application.", 0xe8000086 },
{ "kAMDIncorrectArchitectureError", "This application does not support this device’s CPU type.", 0xe8000087 },
{ "kAMDPluginCopyFailedError", "Could not copy VPN Plug-in into app container.", 0xe8000088 },
{ "kAMDBreadcrumbFailedError", "Could not write installation breadcrumb.", 0xe8000089 },
{ "kAMDBreadcrumbUnlockError", "Could not update installation breadcrumb.", 0xe800008a },
{ "kAMDGeoJSONCaptureFailedError", "Could not save the GeoJSON data.", 0xe800008b },
{ "kAMDNewsstandArtworkCaptureFailedError", "Could not save the Newsstand artwork.", 0xe800008c },
{ "kAMDMissingCommandError", "The request did not contain a command.", 0xe800008d },
{ "kAMDNotEntitledError", "The requesting application is not allowed to make this request.", 0xe800008e },
{ "kAMDMissingPackagePathError", "Request was missing the package path.", 0xe800008f },
{ "kAMDMissingContainerPathError", "Request was missing the container path.", 0xe8000090 },
{ "kAMDMissingApplicationIdentifierError", "Request was missing the application identifier.", 0xe8000091 },
{ "kAMDMissingAttributeValueError", "Request was missing a required value.", 0xe8000092 },
{ "kAMDLookupFailedError", "Could not list installed applications.", 0xe8000093 },
{ "kAMDDictCreationFailedError", "Could not extract capabilities from the request.", 0xe8000094 },
{ "kAMDUserDeniedPairingError", "The device rejected the pairing attempt.", 0xe8000095 },
{ "kAMDPairingDialogResponsePendingError", "The user has not yet responded to the pairing request.", 0xe8000096 },
{ "kAMDInstallProhibitedError", "Installation of apps is prohibited by a policy on the device.", 0xe8000097 },
{ "kAMDUninstallProhibitedError", "Uninstallation of apps is prohibited by a policy on the device.", 0xe8000098 },
{ "kAMDFMiPProtectedError", "The device is in lost mode.", 0xe8000099 },
{ "kAMDMCProtected", "Pairing is prohibited by a policy on the device.", 0xe800009a },
{ "kAMDMCChallengeRequired", "A policy on the device requires secure pairing.", 0xe800009b },
{ "kAMDMissingBundleVersionError", "The bundle’s Info.plist does not contain a CFBundleVersion key or its value is not a string.", 0xe800009c },
{ "kAMDAppBlacklistedError", "This app is not allowed to be installed on this device.", 0xe800009d },
{ "?", "This app contains an app extension with an illegal bundle identifier. App extension bundle identifiers must have a prefix consisting of their containing application's bundle identifier followed by a '.'.", 0xe800009e },
{ "?", "If an app extension defines the XPCService key in its Info.plist, it must have a dictionary value.", 0xe800009f },
{ "?", "App extensions must define the NSExtension key with a dictionary value in their Info.plist.", 0xe80000a0 },
{ "?", "If an app extension defines the CFBundlePackageType key in its Info.plist, it must have the value \"XPC!\".", 0xe80000a1 },
{ "?", "App extensions must define either NSExtensionMainStoryboard or NSExtensionPrincipalClass keys in the NSExtension dictionary in their Info.plist.", 0xe80000a2 },
{ "?", "If an app extension defines the NSExtensionContextClass key in the NSExtension dictionary in its Info.plist, it must have a string value containing one or more characters.", 0xe80000a3 },
{ "?", "If an app extension defines the NSExtensionContextHostClass key in the NSExtension dictionary in its Info.plist, it must have a string value containing one or more characters.", 0xe80000a4 },
{ "?", "If an app extension defines the NSExtensionViewControllerHostClass key in the NSExtension dictionary in its Info.plist, it must have a string value containing one or more characters.", 0xe80000a5 },
{ "?", "This app contains an app extension that does not define the NSExtensionPointIdentifier key in its Info.plist. This key must have a reverse-DNS format string value.", 0xe80000a6 },
{ "?", "This app contains an app extension that does not define the NSExtensionPointIdentifier key in its Info.plist with a valid reverse-DNS format string value.", 0xe80000a7 },
{ "?", "If an app extension defines the NSExtensionAttributes key in the NSExtension dictionary in its Info.plist, it must have a dictionary value.", 0xe80000a8 },
{ "?", "If an app extension defines the NSExtensionPointName key in the NSExtensionAttributes dictionary in the NSExtension dictionary in its Info.plist, it must have a string value containing one or more characters.", 0xe80000a9 },
{ "?", "If an app extension defines the NSExtensionPointVersion key in the NSExtensionAttributes dictionary in the NSExtension dictionary in its Info.plist, it must have a string value containing one or more characters.", 0xe80000aa },
{ "?", "This app or a bundle it contains does not define the CFBundleName key in its Info.plist with a string value containing one or more characters.", 0xe80000ab },
{ "?", "This app or a bundle it contains does not define the CFBundleDisplayName key in its Info.plist with a string value containing one or more characters.", 0xe80000ac },
{ "?", "This app or a bundle it contains defines the CFBundleShortVersionStringKey key in its Info.plist with a non-string value or a zero-length string value.", 0xe80000ad },
{ "?", "This app or a bundle it contains defines the RunLoopType key in the XPCService dictionary in its Info.plist with a non-string value or a zero-length string value.", 0xe80000ae },
{ "?", "This app or a bundle it contains defines the ServiceType key in the XPCService dictionary in its Info.plist with a non-string value or a zero-length string value.", 0xe80000af },
{ "?", "This application or a bundle it contains has the same bundle identifier as this application or another bundle that it contains. Bundle identifiers must be unique.", 0xe80000b0 },
{ "?", "This app contains an app extension that specifies an extension point identifier that is not supported on this version of iOS for the value of the NSExtensionPointIdentifier key in its Info.plist.", 0xe80000b1 },
{ "?", "This app contains multiple app extensions that are file providers. Apps are only allowed to contain at most a single file provider app extension.", 0xe80000b2 },
{ "kMobileHouseArrestMissingCommand", "The request was missing a command.", 0xe80000b3 },
{ "kMobileHouseArrestUnknownCommand", "The request contained an invalid command.", 0xe80000b4 },
{ "kMobileHouseArrestMissingIdentifier", "The request was missing an application identifier.", 0xe80000b5 },
{ "kMobileHouseArrestDictionaryFailed", "The request contained an invalid request dictionary.", 0xe80000b6 },
{ "kMobileHouseArrestInstallationLookupFailed", "Could not find the requested application.", 0xe80000b7 },
{ "kMobileHouseArrestApplicationLookupFailed", "The requested application is not a user application.", 0xe80000b8 },
{ "kMobileHouseArrestMissingContainer", "The requested application does not contain a valid data container.", 0xe80000b9 },
{ "kMobileHouseArrestPathConversionFailed", "Could not convert the requested application’s data container path.", 0xe80000bb },
{ "kMobileHouseArrestPathMissing", "The requested application’s data container path does not exist.", 0xe80000bc },
{ "kMobileHouseArrestInvalidPath", "The requested application contained an invalid data container path.", 0xe80000bd },
{ "kAMDMismatchedApplicationIdentifierEntitlementError", "This application’s application-identifier entitlement does not match that of the installed application. These values must match for an upgrade to be allowed.", 0xe80000be },
{ "kAMDInvalidSymlinkError", "The bundle contained an invalid symlink.", 0xe80000bf },
{ "kAMDNoSpaceError", "No space is available on the device.", 0xe80000c0 },
{ "?", "The WatchKit app extension must have, in its Info.plist's NSExtension dictionary's NSExtensionAttributes dictionary, the key WKAppBundleIdentifier with a value equal to the associated WatchKit app's bundle identifier.", 0xe80000c1 },
{ "?", "This app is not a valid AppleTV Stub App", 0xe80000c2 },
{ "kAMDBundleiTunesMetadataVersionMismatchError", "This application’s iTunesMetadata.plist specifies versions that do not match the versions listed for the app in its Info.plist", 0xe80000c3 },
{ "kAMDInvalidiTunesMetadataPlistError", "This application’s iTunesMetadata.plist is not valid.", 0xe80000c4 },
{ "kAMDMismatchedBundleIDSigningIdentifierError", "This application’s bundle identifier does not match its code signing identifier.", 0xe80000c5 },
{ "?", "This app contains multiple WatchKit app extensions. Only a single WatchKit extension is allowed.", 0xe80000c6 },
{ "?", "A WatchKit app within this app is not a valid bundle.", 0xe80000c7 },
{ "kAMDDeviceNotSupportedByThinningError", "This application is not built for this device.", 0xe80000c8 },
{ "?", "The UISupportedDevices key in this app's Info.plist does not specify a valid set of supported devices.", 0xe80000c9 },
{ "?", "This app contains an app extension with an illegal bundle identifier. App extension bundle identifiers must have a prefix consisting of their containing application's bundle identifier followed by a '.', with no further '.' characters after the prefix.", 0xe80000ca },
{ "kAMDAppexBundleIDConflictWithOtherIdentifierError", "This application contains an app extension with a bundle identifier that conflicts with the bundle identifier of another app or app extension already installed.", 0xe80000cb },
{ "kAMDBundleIDConflictWithOtherIdentifierError", "This application’s bundle identifier conflicts with the identifier of another app or app extension already installed.", 0xe80000cc },
{ "?", "This app contains multiple WatchKit 1.0 apps. Only a single WatchKit 1.0 app is allowed.", 0xe80000cd },
{ "?", "This app contains multiple WatchKit 2.0 apps. Only a single WatchKit 2.0 app is allowed.", 0xe80000ce },
{ "?", "The WatchKit app has an invalid stub executable.", 0xe80000cf },
{ "?", "The WatchKit app has multiple app extensions. Only a single WatchKit extension is allowed in a WatchKit app, and only if this is a WatchKit 2.0 app.", 0xe80000d0 },
{ "?", "The WatchKit 2.0 app contains non-WatchKit app extensions. Only WatchKit app extensions are allowed in WatchKit apps.", 0xe80000d1 },
{ "?", "The WatchKit app has one or more embedded frameworks. Frameworks are only allowed in WatchKit app extensions in WatchKit 2.0 apps.", 0xe80000d2 },
{ "?", "This app contains a WatchKit 1.0 app with app extensions. This is not allowed.", 0xe80000d3 },
{ "?", "This app contains a WatchKit 2.0 app without an app extension. WatchKit 2.0 apps must contain a WatchKit app extension.", 0xe80000d4 },
{ "?", "The WatchKit app's Info.plist must have a WKCompanionAppBundleIdentifier key set to the bundle identifier of the companion app.", 0xe80000d5 },
{ "?", "The WatchKit app's Info.plist contains a non-string key.", 0xe80000d6 },
{ "?", "The WatchKit app's Info.plist contains a key that is not in the whitelist of allowed keys for a WatchKit app.", 0xe80000d7 },
{ "?", "The WatchKit 1.0 and a WatchKit 2.0 apps within this app must have have the same bundle identifier.", 0xe80000d8 },
{ "?", "This app contains a WatchKit app with an invalid bundle identifier. The bundle identifier of a WatchKit app must have a prefix consisting of the companion app's bundle identifier, followed by a '.'.", 0xe80000d9 },
{ "?", "This app contains a WatchKit app where the UIDeviceFamily key in its Info.plist does not specify the value 4 to indicate that it's compatible with the Apple Watch device type.", 0xe80000da },
{ "?", "The device is out of storage for apps. Please remove some apps from the device and try again.", 0xe80000db },
{ "?", "This app or an app that it contains has a Siri Intents app extension that is missing the IntentsSupported array in the NSExtensionAttributes dictionary in the NSExtension dictionary in its Info.plist.", 0xe80000dc },
{ "?", "This app or an app that it contains has a Siri Intents app extension that does not correctly define the IntentsRestrictedWhileLocked key in the NSExtensionAttributes dictionary in the NSExtension dictionary in its Info.plist. The key's value must be an array of strings.", 0xe80000dd },
{ "?", "This app or an app that it contains has a Siri Intents app extension that declares values in its IntentsRestrictedWhileLocked key's array value that are not in its IntentsSupported key's array value (in the NSExtensionAttributes dictionary in the NSExtension dictionary in its Info.plist).", 0xe80000de },
{ "?", "This app or an app that it contains declares multiple Siri Intents app extensions that declare one or more of the same values in the IntentsSupported array in the NSExtensionAttributes dictionary in the NSExtension dictionary in their Info.plist. IntentsSupported must be distinct among a given Siri Intents extension type within an app.", 0xe80000df },
{ "?", "The WatchKit 2.0 app, which expects to be compatible with watchOS versions earlier than 3.0, contains a non-WatchKit extension in a location that's not compatible with watchOS versions earlier than 3.0.", 0xe80000e0 },
{ "?", "The WatchKit 2.0 app, which expects to be compatible with watchOS versions earlier than 3.0, contains a framework in a location that's not compatible with watchOS versions earlier than 3.0.", 0xe80000e1 },
{ "kAMDMobileImageMounterDeviceLocked", "The device is locked.", 0xe80000e2 },
{ "kAMDInvalidSINFError", "The encryption information included with this application is not valid so this application cannot be installed on this device.", 0xe80000e3 },
{ "?", "Multiple iMessage app extensions were found in this app. Only one is allowed.", 0xe80000e4 },
{ "?", "This iMessage application is missing its required iMessage app extension.", 0xe80000e5 },
{ "?", "This iMessage application contains an app extension type other than an iMessage app extension. iMessage applications may only contain one iMessage app extension and may not contain other types of app extensions.", 0xe80000e6 },
{ "?", "This app contains a WatchKit app with one or more Siri Intents app extensions that declare IntentsSupported that are not declared in any of the companion app's Siri Intents app extensions. WatchKit Siri Intents extensions' IntentsSupported values must be a subset of the companion app's Siri Intents extensions' IntentsSupported values.", 0xe80000e7 },
{ "kAMDRequireCUPairingCodeError", "Invalid PIN code entered.", 0xe80000e8 },
{ "kAMDRequireCUPairingBackoffError", "Retry later.", 0xe80000e9 },
{ "kAMDCUPairingError", "General failure while pairing over the network.", 0xe80000ea },
{ "kAMDCUPairingContinueError", "Continue pairing process over the network.", 0xe80000eb },
{ "kAMDCUPairingResetError", "Pairing was reset due to earlier issues, try again.", 0xe80000ec },
{ "kAMDRequireCUPairingError", "Cannot pair over network yet", 0xe80000ed },
{ "kAMDPasswordRequiredError", "A passcode is required to be set on the device.", 0xe80000ee },
{ "?", "This app's Info.plist has too many items in the array for the key INAlternativeAppNames. A maximum of three is allowed.", 0xe80000ef },
{ "?", "The version of WatchKit used by this app is no longer supported on this version of watchOS.", 0xe80000f0 },
{ "kAMDInternalError", "Internal error occurred on the device.", 0xe80000f1 },
{ "?", "This app contains a watch-only watch app. Watch-only apps cannot be embedded within a companion app.", 0xe80000f2 },
{ "?", "This app is watch-only so it may not specify the key WKCompanionAppBundleIdentifier in its Info.plist.", 0xe80000f3 },
{ "?", "Watch-only apps must have a MinimumOSVersion of 6.0 or later.", 0xe80000f4 },
{ "?", "This WatchKit app contains the WKApplication key in its Info.plist, but also has a WatchKit Extension. Apps with the WKApplication key should not contain a WatchKit Extension.", 0xe80000f6 },
{ "?", "This WatchKit app has both WKApplication and WKWatchKitApp Info.plist keys.", 0xe80000f7 },
{ "?", "This app clip is missing the \"com.apple.developer.parent-application-identifiers\" entitlement.", 0xe80000f8 },
{ "?", "This app clip's bundle identifier is not prefixed by its parent app's bundle identifier.", 0xe80000f9 },
{ "?", "This app clip has the \"com.apple.security.application-groups\" entitlement, which is not allowed for app clips.", 0xe80000fa },
{ "?", "This app clip has the \"keychain-access-groups\" entitlement, which is not allowed for app clips.", 0xe80000fb },
{ "?", "This app clip has at least one active plugin. App clips aren't allowed to contain any active plugins.", 0xe80000fc },
{ "?", "This app clip contains an embedded watch app. App clips aren't allowed to contain embedded watch apps.", 0xe80000fd },
{ "?", "This app clip has an illegal bundle identifier. An app clip's bundle identifier must have a prefix consisting of its parent application's bundle identifier followed by a '.', with no further '.' characters after the prefix.", 0xe80000fe },
{ "?", "An app clip must have exactly one item in the \"com.apple.developer.parent-application-identifiers\" entitlement's array value, and that item must be equal to the parent app's \"application-identifier\" entitlement's value.", 0xe80000ff },
{ "?", "This WatchKit app must be deleted before it can be replaced with an app that contains a WatchKit extension.", 0xe8000100 },
{ "?", "This app contains an app extension that defines either a NSExtensionMainStoryboard or NSExtensionPrincipalClass key, which is not allowed for that type of app extension.", 0xe8000101 },
{ "?", "This app has the ITSWatchOnlyContainer key set in its Info.plist, which identifies it as a shell app surrounding a Watch-only app; these are not installable.", 0xe8000102 },
{ "?", "This app defines both WKWatchOnly and WKRunsIndependentlyOfCompanionApp in its Info.plist and/or its WatchKit extension's Info.plist. Having both defined is not allowed.", 0xe8000103 },
{ "?", "App clip installation is not supported on this platform.", 0xe8000104 },
{ "?", "An unknown error has occurred.", 0xe8008001 },
{ "?", "Attempted to modify an immutable provisioning profile.", 0xe8008002 },
{ "?", "This provisioning profile is malformed.", 0xe8008003 },
{ "?", "This provisioning profile does not have a valid signature (or it has a valid, but untrusted signature).", 0xe8008004 },
{ "?", "This provisioning profile is malformed.", 0xe8008005 },
{ "?", "This provisioning profile is malformed.", 0xe8008006 },
{ "?", "This provisioning profile is malformed.", 0xe8008007 },
{ "?", "This provisioning profile is malformed.", 0xe8008008 },
{ "?", "The signature was not valid.", 0xe8008009 },
{ "?", "Unable to allocate memory.", 0xe800800a },
{ "?", "A file operation failed.", 0xe800800b },
{ "?", "There was an error communicating with your device.", 0xe800800c },
{ "?", "There was an error communicating with your device.", 0xe800800d },
{ "?", "This provisioning profile does not have a valid signature (or it has a valid, but untrusted signature).", 0xe800800e },
{ "?", "The application's signature is valid but it does not match the expected hash.", 0xe800800f },
{ "?", "This provisioning profile is unsupported.", 0xe8008010 },
{ "?", "This provisioning profile has expired.", 0xe8008011 },
{ "?", "This provisioning profile cannot be installed on this device.", 0xe8008012 },
{ "?", "This provisioning profile does not have a valid signature (or it has a valid, but untrusted signature).", 0xe8008013 },
{ "?", "The executable contains an invalid signature.", 0xe8008014 },
{ "?", "A valid provisioning profile for this executable was not found.", 0xe8008015 },
{ "?", "The executable was signed with invalid entitlements.", 0xe8008016 },
{ "?", "A signed resource has been added, modified, or deleted.", 0xe8008017 },
{ "?", "The identity used to sign the executable is no longer valid.", 0xe8008018 },
{ "?", "The application does not have a valid signature.", 0xe8008019 },
{ "?", "This provisioning profile does not have a valid signature (or it has a valid, but untrusted signature).", 0xe800801a },
{ "?", "There was an error communicating with your device.", 0xe800801b },
{ "?", "No code signature found.", 0xe800801c },
{ "?", "Rejected by policy.", 0xe800801d },
{ "?", "The requested profile does not exist (it may have been removed).", 0xe800801e },
{ "?", "Attempted to install a Beta profile without the proper entitlement.", 0xe800801f },
{ "?", "Attempted to install a Beta profile over lockdown connection.", 0xe8008020 },
{ "?", "The maximum number of apps for free development profiles has been reached.", 0xe8008021 },
{ "?", "An error occured while accessing the profile database.", 0xe8008022 },
{ "?", "An error occured while communicating with the agent.", 0xe8008023 },
{ "?", "The provisioning profile is banned.", 0xe8008024 },
{ "?", "The user did not explicitly trust the provisioning profile.", 0xe8008025 },
{ "?", "The provisioning profile requires online authorization.", 0xe8008026 },
{ "?", "The cdhash is not in the trust cache.", 0xe8008027 },
{ "?", "Invalid arguments or option combination.", 0xe8008028 },
{ "?", "The code signature version is no longer supported.", 0xe8008029 }
};
mobdev_err *mobdev_geterr(uint32_t num) {
  int errCount = sizeof( mobdev_errs ) / sizeof( mobdev_err );
  for( int i=0;i<errCount;i++ ) if( mobdev_errs[i].num == num ) return &mobdev_errs[i];
  return NULL;
}
#endif
