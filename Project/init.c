#include "main.h"
#include "DB.h"

void init(void) {	//초기화 함수
	char sys_cmd[200];
	system("title Escape");
	sprintf(sys_cmd, "mode con: cols=%d lines=%d && color F", WIDTH, HEIGHT);
	system(sys_cmd);
	DB_connect();
}