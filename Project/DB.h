#pragma once
#include <mysql.h>
#pragma comment(lib, "libmysql.lib")

#define DB_HOST "127.0.0.1"
#define DB_USER "root"
#define DB_PASS "tjs12260324!"
#define DB_NAME "login"
#define CHOP(x) x[strlen(x)-1] = '\0'

struct DB_con {
	MYSQL conn;
	MYSQL* connection;
	MYSQL_RES* result;
	MYSQL_ROW row;
}db;

int DB_connect(void);