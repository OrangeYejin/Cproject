#include "main.h"

void menu(void) {	//�޴� ǥ�� �Լ�
	
	system("cls");
	printf("\n\n       �����     �����        ����          ��         �����      �����\n");
	printf("       ��           ��            ��      ��      ��  ��       ��      ��    ��\n");
	printf("       �����     �����      ��            ������     �����      �����\n");
	printf("       ��                 ��      ��      ��    ��      ��     ��            ��\n");
	printf("       �����     �����        ����      ��      ��     ��            �����\n");

	gotoxy(30, 15);
	printf("1 START");
	gotoxy(30, 17);
	printf("2 HOW TO");
	gotoxy(30, 19);
	printf("3 EXIT");
	gotoxy(0, 40);
	printf(" ");

	choose = _getch();	//Ű������ ���ڸ� �Է� �� �ش� �Լ� ����

	if (choose == '1')
		story();
	else if (choose == '2')
		howto();
	else if (choose == '3') {
		exit(1);
	}
}