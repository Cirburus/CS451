/* tkConfig.h.  Generated from tkConfig.h.in by configure.  */
/* ../unix/tkConfig.h.in.  Generated from configure.ac by autoheader.  */


    #ifndef _TKCONFIG
    #define _TKCONFIG

/* Is pthread_attr_get_np() declared in <pthread.h>? */
/* #undef ATTRGETNP_NOT_DECLARED */

/* Is pthread_getattr_np declared in <pthread.h>? */
/* #undef GETATTRNP_NOT_DECLARED */

/* Define to 1 if you have the <AvailabilityMacros.h> header file. */
#define HAVE_AVAILABILITYMACROS_H 1

/* Defined when compiler supports casting to union type. */
#define HAVE_CAST_TO_UNION 1

/* Do we have access to Darwin CoreFoundation.framework? */
#define HAVE_COREFOUNDATION 1

/* Do we have the intptr_t type? */
#define HAVE_INTPTR_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `Xft' library (-lXft). */
/* #undef HAVE_LIBXFT */

/* Do we have <limits.h>? */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the `lseek64' function. */
/* #undef HAVE_LSEEK64 */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `open64' function. */
/* #undef HAVE_OPEN64 */

/* Define to 1 if you have the `pthread_atfork' function. */
#define HAVE_PTHREAD_ATFORK 1

/* Do we want a BSD-like thread-attribute interface? */
/* #undef HAVE_PTHREAD_ATTR_GET_NP */

/* Define to 1 if you have the `pthread_attr_setstacksize' function. */
#define HAVE_PTHREAD_ATTR_SETSTACKSIZE 1

/* Do we want a Linux-like thread-attribute interface? */
/* #undef HAVE_PTHREAD_GETATTR_NP */

/* Define to 1 if you have the `pthread_get_stacksize_np' function. */
#define HAVE_PTHREAD_GET_STACKSIZE_NP 1

/* Does struct password have a pw_gecos field? */
#define HAVE_PW_GECOS 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Is 'struct dirent64' in <sys/types.h>? */
/* #undef HAVE_STRUCT_DIRENT64 */

/* Is 'struct stat64' in <sys/stat.h>? */
/* #undef HAVE_STRUCT_STAT64 */

/* Should we include <sys/select.h>? */
/* #undef HAVE_SYS_SELECT_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Is off64_t in <sys/types.h>? */
/* #undef HAVE_TYPE_OFF64_T */

/* Do we have the uintptr_t type? */
#define HAVE_UINTPTR_T 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Is weak import available? */
#define HAVE_WEAK_IMPORT 1

/* Have we turned on XFT (antialiased fonts)? */
/* #undef HAVE_XFT */

/* Do we have XkbKeycodeToKeysym? */
#define HAVE_XKBKEYCODETOKEYSYM 1

/* Is XScreenSaver available? */
#define HAVE_XSS 1

/* Is this a Mac I see before me? */
#define MAC_OSX_TCL 1

/* Are we building TkAqua? */
/* #undef MAC_OSX_TK */

/* Compiler support for module scope symbols */
#define MODULE_SCOPE extern __attribute__((__visibility__("hidden")))

/* Is no debugging enabled? */
#define NDEBUG 1

/* Is Darwin CoreFoundation unavailable for 64-bit? */
/* #undef NO_COREFOUNDATION_64 */

/* Do we have fd_set? */
/* #undef NO_FD_SET */

/* Do we have <limits.h>? */
/* #undef NO_LIMITS_H */

/* Do we have <stdlib.h>? */
/* #undef NO_STDLIB_H */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "tk"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "tk 8.5"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "tk"

/* Define to the version of this package. */
#define PACKAGE_VERSION "8.5"

/* Is this a static build? */
/* #undef STATIC_BUILD */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Is this a 64-bit build? */
/* #undef TCL_CFG_DO64BIT */

/* Is this an optimized build? */
#define TCL_CFG_OPTIMIZED 1

/* Is bytecode debugging enabled? */
/* #undef TCL_COMPILE_DEBUG */

/* Are bytecode statistics enabled? */
/* #undef TCL_COMPILE_STATS */

/* Is memory debugging enabled? */
/* #undef TCL_MEM_DEBUG */

/* What is the default extension for shared libraries? */
#define TCL_SHLIB_EXT ".dylib"

/* Are we building with threads enabled? */
#define TCL_THREADS 1

/* Are wide integers to be implemented with C 'long's? */
#define TCL_WIDE_INT_IS_LONG 1

/* What type should be used to define wide integers? */
/* #undef TCL_WIDE_INT_TYPE */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Is Tk built as a framework? */
/* #undef TK_FRAMEWORK */

/* Are TkAqua debug messages enabled? */
/* #undef TK_MAC_DEBUG */

/* Do we want to use the threaded memory allocator? */
#define USE_THREAD_ALLOC 1

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */

/* Are Darwin SUSv3 extensions available? */
#define _DARWIN_C_SOURCE 1

/* Add the _ISOC99_SOURCE flag when building */
/* #undef _ISOC99_SOURCE */

/* Add the _LARGEFILE64_SOURCE flag when building */
/* #undef _LARGEFILE64_SOURCE */

/* Add the _LARGEFILE_SOURCE64 flag when building */
/* #undef _LARGEFILE_SOURCE64 */

/* # needed in sys/socket.h Should OS/390 do the right thing with sockets? */
/* #undef _OE_SOCKETS */

/* Do we really want to follow the standard? Yes we do! */
/* #undef _POSIX_PTHREAD_SEMANTICS */

/* Do we want the reentrant OS API? */
#define _REENTRANT 1

/* Do we want the thread-safe OS API? */
#define _THREAD_SAFE 1

/* Do we want to use the XOPEN network library? */
/* #undef _XOPEN_SOURCE */

/* Do we want to use the XOPEN network library? */
/* #undef _XOPEN_SOURCE_EXTENDED */

/* Define to 1 if type `char' is unsigned and you are not using gcc.  */
#ifndef __CHAR_UNSIGNED__
/* # undef __CHAR_UNSIGNED__ */
#endif

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Signed integer type wide enough to hold a pointer. */
/* #undef intptr_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned' if <sys/types.h> does not define. */
/* #undef size_t */

/* Do we want to use the strtod() in compat? */
/* #undef strtod */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Unsigned integer type wide enough to hold a pointer. */
/* #undef uintptr_t */


    /* Undef unused package specific autoheader defines so that we can
     * include both tclConfig.h and tkConfig.h at the same time: */
    /* override */ #undef PACKAGE_NAME
    /* override */ #undef PACKAGE_STRING
    /* override */ #undef PACKAGE_TARNAME
    #endif /* _TKCONFIG */
