/*
 * configure-sussed platform #defines.
 */
#ifndef __PLATFORM_H__
#define __PLATFORM_H__

#define HostPlatform   i386_unknown_mingw32
#define TargetPlatform i386_unknown_mingw32
#define BuildPlatform  i386_unknown_mingw32

/* Definitions suitable for use in CPP conditionals */
#define i386_unknown_mingw32_HOST 1
#define i386_unknown_mingw32_TARGET 1
#define i386_unknown_mingw32_BUILD   1

#define i386_HOST 1
#define i386_TARGET 1
#define i386_BUILD 1

#define mingw32_HOST_OS 1
#define mingw32_TARGET_OS 1
#define mingw32_BUILD_OS 1

#endif /* __PLATFORM_H__ */
