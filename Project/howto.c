#include "main.h"

void howto(void) {		//���� ����, ���� ���� ����
	system("cls");
	printf("\n\n  ���� ������ ���� �����?\n\n");
	printf("  �ϴ� �˾ƺ��߰ھ�. \n\n\n");
	printf("  �ƹ� Ű�� ������ ���丮�� ��� ������ �� �ֽ��ϴ�.\n");
	printf("  �������� Ȯ���� ���� ���丮�� �̾�ϴ�.\n\n");
	printf("  1 �ڷ� ����\n");
	printf("  2 �ٷ� ����\n");

	choose = _getch();
	if (choose == '1')
		menu();
	else if (choose == '2')
		story();
}