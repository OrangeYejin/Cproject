#include "main.h"

void menu(void) {	//메뉴 표시 함수
	
	system("cls");
	printf("\n\n       ■■■■     ■■■■        ■■■          ■         ■■■■      ■■■■\n");
	printf("       ■           ■            ■      ■      ■  ■       ■      ■    ■\n");
	printf("       ■■■■     ■■■■      ■            ■■■■■     ■■■■      ■■■■\n");
	printf("       ■                 ■      ■      ■    ■      ■     ■            ■\n");
	printf("       ■■■■     ■■■■        ■■■      ■      ■     ■            ■■■■\n");

	gotoxy(30, 15);
	printf("1 START");
	gotoxy(30, 17);
	printf("2 HOW TO");
	gotoxy(30, 19);
	printf("3 EXIT");
	gotoxy(0, 40);
	printf(" ");

	choose = _getch();	//키보드의 숫자를 입력 시 해당 함수 실행

	if (choose == '1')
		story();
	else if (choose == '2')
		howto();
	else if (choose == '3') {
		exit(1);
	}
}