/* config.h -- wasmtar targeted config       -*-C-*-

/* Use high resolution file timestamps if nonzero. */
#define FILE_TIMESTAMP_HI_RES 0

/* Define to 1 if the 'getloadavg' function needs to be run setuid or setgid.
   */
/* #undef GETLOADAVG_PRIVILEGED */

/* Define to 1 if you have 'alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
/* #undef HAVE_ALLOCA_H */

/* Define to 1 if you have the 'atexit' function. */
#define HAVE_ATEXIT 1

/* Use case insensitive file names */
/* #undef HAVE_CASE_INSENSITIVE_FS */

/* Define to 1 if you have the clock_gettime function. */
/* #undef HAVE_CLOCK_GETTIME */

/* Embed GNU Guile support.  Windows build sets this on the
   compilation command line.  */
/* #undef HAVE_GUILE */

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
/* #undef HAVE_DCGETTEXT */

/* Define to 1 if you have the declaration of 'bsd_signal', and to 0 if you
   don't. */
#define HAVE_DECL_BSD_SIGNAL 0

/* Define to 1 if you have the declaration of 'sys_siglist', and to 0 if you
   don't. */
#define HAVE_DECL_SYS_SIGLIST 0

/* Define to 1 if you have the declaration of '_sys_siglist', and to 0 if you
   don't. */
#define HAVE_DECL__SYS_SIGLIST 0

/* Define to 1 if you have the declaration of '__sys_siglist', and to 0 if you
   don't. */
#define HAVE_DECL___SYS_SIGLIST 0

/* Define to 1 if you have the <dirent.h> header file, and it defines 'DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <direct.h> header file, and it defines getcwd()
   and chdir().
   */
#if (defined(_MSC_VER) || defined(__BORLANDC__)) && !defined(__INTERIX)
# define HAVE_DIRECT_H 1
#endif

/* Use platform specific coding */
#define HAVE_DOS_PATHS 1

/* Define to 1 if you have the 'dup2' function. */
#define HAVE_DUP2 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the 'fdopen' function. */
#ifdef __MINGW32__
#define HAVE_FDOPEN 1
#endif


/* Define to the full name of this package. */
#define PACKAGE_NAME "GNU make"

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.3"

/* Define to the character that separates directories in PATH. */
#define PATH_SEPARATOR_CHAR ';'

/* Define as the return type of signal handlers ('int' or 'void'). */
#define RETSIGTYPE void

/* Define to the name of the SCCS 'get' command. */
#define SCCS_GET "echo no sccs get"

/* Define this if the SCCS 'get' command understands the '-G<file>' option. */
/* #undef SCCS_GET_MINUS_G */

/* Define to 1 if the 'setvbuf' function takes the buffering type as its
   second argument and the buffer pointer as the third, as on System V before
   release 3. */
/* #undef SETVBUF_REVERSED */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at run time.
        STACK_DIRECTION > 0 => grows toward higher addresses
        STACK_DIRECTION < 0 => grows toward lower addresses
        STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if the 'S_IS*' macros in <sys/stat.h> do not work properly. */
/* #undef STAT_MACROS_BROKEN */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define if struct stat contains a nanoseconds field */
/* #undef ST_MTIM_NSEC */

/* Version number of package */
#define VERSION "4.3"


#include <sys/types.h>

/* Define to 'int' if <sys/types.h> doesn't define. */
#define gid_t int

/* Define to `int' if <sys/types.h> does not define. */
#define ssize_t int

/* Define to 'int' if <sys/types.h> doesn't define. 
#define uid_t int */

/* Define uintmax_t if not defined in <stdint.h> or <inttypes.h>. 
#if !HAVE_STDINT_H && !HAVE_INTTYPES_H
#define uintmax_t unsigned long
#endif
*/
/*
 * If you have a shell that does not grok 'sh -c quoted-command-line'
 * correctly, you need this setting. Please see below for specific
 * shell support.
 */
/*#define BATCH_MODE_ONLY_SHELL 1 */

/*
 * Define if you have the MKS tool set or shell. Do NOT define
 * BATCH_MODE_ONLY_SHELL if you define HAVE_MKS_SHELL
 */
/*#define HAVE_MKS_SHELL 1 */

/*
 * Enforce the mutual exclusivity restriction.
 */
#ifdef HAVE_MKS_SHELL
#undef BATCH_MODE_ONLY_SHELL
#endif
