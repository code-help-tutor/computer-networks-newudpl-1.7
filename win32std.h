WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef WIN32STD_H
#define WIN32STD_H

#define STRICT      /* windows.h for better error detecting */

/** winsock2 **********************************************************/
#ifdef NEED_WINSOCK2
#include <winsock2.h>  /* For NT socket */
#include <ws2tcpip.h>  /* IP_ADD_MEMBERSHIP */
#include "winsocklib.h"
#endif

#ifndef EADDRNOTAVAIL
#define EADDRNOTAVAIL WSAEADDRNOTAVAIL
#endif

//extern int winfd_dummy;

/** windows.h ********************************************************/
#include <windows.h>
typedef SSIZE_T ssize_t;

/** compiler specific ************************************************/
#ifdef __BORLANDC__
#include <io.h>         /* open() close() write() etc */
#define strcasecmp stricmp
#define strncasecmp strnicmp
#endif

#ifdef _MSC_VER
#define strcasecmp _stricmp
#define strncasecmp _strnicmp
#define open  _open
#define write _write
#define close _close
#endif

/** anything additional, put it here *********************************/
#define NOLONGLONG

#endif /* WIN32STD_H */

