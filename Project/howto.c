#include "main.h"

void howto(void) {		//게임 설명서, 추후 수정 가능
	system("cls");
	printf("\n\n  나는 누구고 여긴 어디지?\n\n");
	printf("  일단 알아봐야겠어. \n\n\n");
	printf("  아무 키를 누르면 스토리를 계속 진행할 수 있습니다.\n");
	printf("  선택지와 확률에 따라 스토리를 이어갑니다.\n\n");
	printf("  1 뒤로 가기\n");
	printf("  2 바로 시작\n");

	choose = _getch();
	if (choose == '1')
		menu();
	else if (choose == '2')
		story();
}