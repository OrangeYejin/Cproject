#include "main.h"

void gotoxy(int x, int y)		//Ű���� ����
{
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}