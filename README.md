# MobileDevice Framework Error Dumper

Usage:
  * `make`
  * `./decode`

Generates `mobdev_err.h` from existing system MobileDevice.framework

Generated file contains `mobdev_geterr( uint32_t )` function that can be used to lookup a numerical error.