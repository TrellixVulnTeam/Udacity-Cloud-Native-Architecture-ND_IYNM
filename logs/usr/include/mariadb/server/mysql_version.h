/* Copyright Abandoned 1996,1999 TCX DataKonsult AB & Monty Program KB
   & Detron HB, 1996, 1999-2004, 2007 MySQL AB.
   This file is public domain and comes with NO WARRANTY of any kind
*/

/* Version numbers for protocol & mysqld */

#ifndef _mysql_version_h
#define _mysql_version_h
#ifdef _CUSTOMCONFIG_
#include <custom_conf.h>
#else
#define PROTOCOL_VERSION		10
#define MYSQL_SERVER_VERSION		"10.3.22-MariaDB"
#define MYSQL_BASE_VERSION		"mysqld-10.3"
#define MARIADB_BASE_VERSION		"mariadb-10.3"
#define MYSQL_SERVER_SUFFIX_DEF		"-0+deb10u1"
#define FRM_VER				6
#define MYSQL_VERSION_ID		100322
#define MYSQL_PORT			3306
#define MYSQL_PORT_DEFAULT		0
#define MYSQL_UNIX_ADDR			"/var/run/mysqld/mysqld.sock"
#define MYSQL_CONFIG_NAME		"my"
#define MYSQL_COMPILATION_COMMENT	"Debian 10"
#define SERVER_MATURITY_LEVEL           MariaDB_PLUGIN_MATURITY_STABLE

#ifdef WITH_WSREP
#define WSREP_PATCH_VERSION             "wsrep_25.24"
#endif

/* mysqld compile time options */
#endif /* _CUSTOMCONFIG_ */

#ifndef LICENSE
#define LICENSE				GPL
#endif /* LICENSE */

#endif /* _mysql_version_h */
