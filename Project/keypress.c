#include "main.h"

void gotoxy(int x, int y)		//키보드 제어
{
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}