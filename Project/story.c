#include "main.h"
#include "DB.h"


void story(void) {		//���丮 ���� �Լ�
	
	char name[50] = { 0 };
	char query[255] = { 0 };

	system("cls");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	printf(".\n");
	Sleep(500);
	printf("���� ���µ�,\n\n");
	Sleep(1500);
	printf("���� ��ü �����?\n\n");
	Sleep(1500);
	printf("������ ����� �ϳ��� ���� �ʴ´�.\n\n");
	Sleep(1500);
	printf("���� ������? \n");
	Sleep(1500);
	printf("����� �̸���? : ");
	fgets(name, 50, stdin);
	CHOP(name);
	sprintf(query, "insert into user(name) values('%s')", name);
	mysql_query(db.connection, query);
//	user ���̺� �Է��� name ���� �ִ´�.

	system("cls");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	printf(".\n");
	Sleep(500);
	printf("�̸��� ������ ����ߴ�.\n\n");
	Sleep(1500);
	printf("���� �� ���⿡ �ִ°ɱ�.\n\n");
	Sleep(1500);
	printf("�տ� ���� ���δ�.\n\n");

	while (1) {
		Sleep(1500);
		printf("��� �ұ�.\n\n");
		printf("1. ���� ����   2. ������ �ִ´�\n");

		choose = _getch();
		if (choose == '2') {
			system("cls");
			Sleep(1000);
			printf(".\n");
			Sleep(1000);
			printf(".\n");
			Sleep(500);
			printf("�ƹ��� ������ �Ͼ�� �ʴ´�.\n\n");
			Sleep(500);
			printf("���� ���ۿ� ���� �� ����.\n\n");
			Sleep(500);
			continue;
		}
		else if(choose =='1') {
			break;
		}
		else {
			printf("�Է� �Ǽ�");
			continue;
		}
	}

	system("cls");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	printf(".\n");
	Sleep(500);
	printf("���� �����.\n\n");
	Sleep(1000);
	printf("�� ���� ������ ���δ�.\n\n");
	Sleep(1500);
	printf("���ʰ� ������, ��������� ����.\n\n");
	printf("1. ����   2. ������\n");
	choose = _getch();
	if (choose == '2') {
		system("cls");
		Sleep(1000);
		printf(".\n");
		Sleep(1000);
		printf(".\n");
		Sleep(1500);
		printf("������ �ȴ´�.\n\n");
		Sleep(1500);
		printf("���� ���� ������ �ȴ� �� ����.\n\n");
		Sleep(1500);
		printf("���� ��ü ��� �ִ°ɱ�.\n\n");
		Sleep(1500);
		printf("��� �ȴٺ��� �ֺ��� �����������.\n\n");
		Sleep(1500);
		printf("Ending1. Trap \n\n");
		Sleep(3000);
		return;
	}
	else if (choose != '1') {
		printf("�Է� �Ǽ�");
	}

	system("cls");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	printf(".\n");
	Sleep(500);
	printf("�Ȱ� �ִµ�.\n\n");
	Sleep(1500);
	printf("���� �ϳ� ���δ�.\n\n");
	Sleep(1500);
	printf("�������μ��� �� �濡 ���� ����ۿ� ���µ�.\n\n");
	Sleep(1500);
	printf("(�ƹ� Ű�� ������ ������ �� �� �ֽ��ϴ�.)\n\n");
	_getch();

	system("cls");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	printf(".\n");
	Sleep(500);
	printf("�� �ȿ���\n\n");
	Sleep(1500);
	printf("�� �� ���� ��ġ���\n\n");
	Sleep(1500);
	printf("���� �ִ� �����...\n\n");
	printf(".\n");
	Sleep(500);
	printf(".\n");
	Sleep(500);
	printf("���� ���ݾ�?\n\n");
	Sleep(1500);
	printf("�ƴ�, ��ü ���Ⱑ ���淡 \n\n");
	Sleep(1500);
	printf("���⿡ �ִ� ���� ���� ���� ����.\n\n");
	Sleep(1500);
	printf("ȥ���� ���� ����\n\n");
	Sleep(1500);
	printf("���� �ִ� �Ǵٸ� ���� ���� �ִ�\n\n");
	Sleep(1500);
	printf("���� �� ��.\n\n");
	Sleep(1500);
	printf("(Ȯ���Ϸ��� �ƹ� Ű�� �����ʽÿ�.)\n\n");
	_getch();

	system("cls");
	Sleep(1500);
	printf("������������������������������������������������������\n");
	printf("��          ������ ���         ��\n");
	printf("��				   	              ��\n");
	printf("��   �� ������ �غ� ����Ǵ�        ��\n");
	printf("��   ���� �����̴�.              ��\n");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	printf(".\n");
	Sleep(500);
	printf("�̸��� �Ⱦ��.\n\n");
	
	
	while ((db.row = mysql_fetch_row(db.result)) != NULL) {
		Sleep(1000);
		printf(" �̸� : %s\n", db.row[0]);
	}
	Sleep(1000);
	printf("�������� ���̴� ���� �̸�.\n\n");
	Sleep(1000);
	printf("���� ����鵵 ��....\n\n");
	Sleep(1000);
	printf("�̹��� ���� ������ ���δ�.\n");
	printf("(Ȯ���Ϸ��� �ƹ� Ű�� �����ʽÿ�.)\n\n");
	_getch();

	system("cls");
	Sleep(1000);
	printf(" '��� �Ͻðڽ��ϱ�?' \n");
	Sleep(1000);
	printf(" '��� �տ� ���� �� �� �ֽ��ϴ�.' \n");
	Sleep(1000);
	printf(" '����� ���ÿ� ���� ����� �ٸ��ϴ�.' \n");
	Sleep(1500);
	printf("���� ���� �ΰ���.\n");

	printf("��������� ����.\n\n");
	printf("1�� ��   2����\n");
	choose = _getch();

	if (choose == '2') {
		system("cls");
		Sleep(1500);
		printf("\n\n���� ����\n");
		Sleep(1000);
		printf("�� ���� ����������.\n");
		Sleep(1000);
		printf("�ٽ� ���� �� ����\n");
		Sleep(1000);
		printf(".\n");
		Sleep(1000);
		printf(".\n");
		Sleep(1000);
		printf(".\n");
		Sleep(1500);
		printf("���� �����ִ� �� ������ ����־���.\n");
		Sleep(1500);
		printf("Ending2. Wake Up \n\n");
		_getch();
		return;
	}
	if (choose == '1') {
		system("cls");
		Sleep(1500);
		printf("\n\n���� ����\n");
		Sleep(1000);
		printf("�� ���� ����������.\n");
		Sleep(1000);
		printf("������ �Ҵ� ����̴�.\n");
		Sleep(1500);
		printf("Ending3. Disappeal \n\n");
		_getch();
		return;
	}



	mysql_close(db.connection);

}