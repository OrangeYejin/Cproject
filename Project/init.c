#include "main.h"
#include "DB.h"

void init(void) {	//�ʱ�ȭ �Լ�
	char sys_cmd[200];
	system("title Escape");
	sprintf(sys_cmd, "mode con: cols=%d lines=%d && color F", WIDTH, HEIGHT);
	system(sys_cmd);
	DB_connect();
}