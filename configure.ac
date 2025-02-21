# Process this file with autoconf to produce a configure script.
#AC_INIT(FULL-PACKAGE-NAME, VERSION, BUG-REPORT-ADDRESS)
AC_INIT([newudpl], [1.7])
AC_CONFIG_SRCDIR([newudpl.c])
#AM_CONFIG_HEADER([config.h])
AM_INIT_AUTOMAKE

# Checks for programs.
AC_PROG_AWK
AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LN_S

if [[ "x$GCC" = "xyes" ]]; then
  CFLAGS="$CFLAGS -Wall"
fi

# Checks for libraries.
AC_CHECK_LIB(m, floor)
AC_CHECK_LIB(nsl, gethostbyname)
AC_CHECK_LIB(socket, bind)

# Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([arpa/inet.h netdb.h netinet/in.h sys/socket.h sys/select.h sys/time.h sys/timeb.h time.h unistd.h limits.h sys/utsname.h sys/param.h rpcsvc/ypclnt.h])
AC_HEADER_TIME

# Checks for typedefs, structures, and compiler characteristics.
#AC_C_CONST
#AC_TYPE_UID_T
#AC_TYPE_OFF_T
#AC_TYPE_PID_T
#AC_TYPE_SIZE_T

AC_CHECK_TYPES([int8_t, uint8_t, uint16_t, uint32_t, ssize_t])
AC_CHECK_TYPE(socklen_t, [AC_DEFINE(HAVE_SOCKLEN_T)],, [#include <sys/socket.h>])
AC_CHECK_TYPE(in_addr_t, [AC_DEFINE(HAVE_IN_ADDR_T)],, [#include <netinet/in.h>])
AC_CHECK_TYPE(in_port_t, [AC_DEFINE(HAVE_IN_PORT_T)],, [#include <netinet/in.h>])

#AC_STRUCT_TM

# Checks for library functions.
AC_PROG_GCC_TRADITIONAL
#AC_FUNC_MALLOC
#AC_FUNC_MKTIME
AC_TYPE_SIGNAL
#AC_FUNC_STRFTIME
#AC_FUNC_VPRINTF
AC_CHECK_FUNCS([floor ftruncate gethostbyaddr gethostbyname gethostname gettimeofday inet_ntoa memset select socket sqrt strcasecmp strerror strncasecmp strtol uname ftime getopt setitimer yp_match])
AC_LIBOBJ(gettimeofday)
AC_LIBOBJ(uname)
AC_LIBOBJ(getopt)

#AC_CONFIG_FILES([Makefile])
#AC_OUTPUT
AC_OUTPUT([Makefile])

