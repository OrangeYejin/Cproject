#include "main.h"
#include "DB.h"


void story(void) {		//스토리 진행 함수
	
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
	printf("눈을 떴는데,\n\n");
	Sleep(1500);
	printf("여긴 대체 어디지?\n\n");
	Sleep(1500);
	printf("이전의 기억이 하나도 나지 않는다.\n\n");
	Sleep(1500);
	printf("내가 누구지? \n");
	Sleep(1500);
	printf("당신의 이름은? : ");
	fgets(name, 50, stdin);
	CHOP(name);
	sprintf(query, "insert into user(name) values('%s')", name);
	mysql_query(db.connection, query);
//	user 테이블에 입력한 name 값을 넣는다.

	system("cls");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	printf(".\n");
	Sleep(500);
	printf("이름은 간신히 기억했다.\n\n");
	Sleep(1500);
	printf("내가 왜 여기에 있는걸까.\n\n");
	Sleep(1500);
	printf("앞에 문이 보인다.\n\n");

	while (1) {
		Sleep(1500);
		printf("어떻게 할까.\n\n");
		printf("1. 문을 연다   2. 가만히 있는다\n");

		choose = _getch();
		if (choose == '2') {
			system("cls");
			Sleep(1000);
			printf(".\n");
			Sleep(1000);
			printf(".\n");
			Sleep(500);
			printf("아무런 반응이 일어나지 않는다.\n\n");
			Sleep(500);
			printf("역시 문밖에 없는 것 같네.\n\n");
			Sleep(500);
			continue;
		}
		else if(choose =='1') {
			break;
		}
		else {
			printf("입력 실수");
			continue;
		}
	}

	system("cls");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	printf(".\n");
	Sleep(500);
	printf("문을 열어보니.\n\n");
	Sleep(1000);
	printf("끝 없는 복도가 보인다.\n\n");
	Sleep(1500);
	printf("왼쪽과 오른쪽, 어디쪽으로 갈까.\n\n");
	printf("1. 왼쪽   2. 오른쪽\n");
	choose = _getch();
	if (choose == '2') {
		system("cls");
		Sleep(1000);
		printf(".\n");
		Sleep(1000);
		printf(".\n");
		Sleep(1500);
		printf("한참을 걷는다.\n\n");
		Sleep(1500);
		printf("끝이 없는 복도를 걷는 것 같다.\n\n");
		Sleep(1500);
		printf("끝은 대체 어디에 있는걸까.\n\n");
		Sleep(1500);
		printf("계속 걷다보니 주변이 희미해져간다.\n\n");
		Sleep(1500);
		printf("Ending1. Trap \n\n");
		Sleep(3000);
		return;
	}
	else if (choose != '1') {
		printf("입력 실수");
	}

	system("cls");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	printf(".\n");
	Sleep(500);
	printf("걷고 있는데.\n\n");
	Sleep(1500);
	printf("방이 하나 보인다.\n\n");
	Sleep(1500);
	printf("지금으로서는 그 방에 들어가는 방법밖에 없는데.\n\n");
	Sleep(1500);
	printf("(아무 키나 누르면 방으로 들어갈 수 있습니다.)\n\n");
	_getch();

	system("cls");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	printf(".\n");
	Sleep(500);
	printf("방 안에는\n\n");
	Sleep(1500);
	printf("알 수 없는 장치들과\n\n");
	Sleep(1500);
	printf("잠들어 있는 사람들...\n\n");
	printf(".\n");
	Sleep(500);
	printf(".\n");
	Sleep(500);
	printf("저건 나잖아?\n\n");
	Sleep(1500);
	printf("아니, 대체 여기가 어디길래 \n\n");
	Sleep(1500);
	printf("여기에 있는 나는 뭐고 나는 뭐지.\n\n");
	Sleep(1500);
	printf("혼란에 빠진 사이\n\n");
	Sleep(1500);
	printf("잠들어 있던 또다른 나의 위에 있는\n\n");
	Sleep(1500);
	printf("종이 한 장.\n\n");
	Sleep(1500);
	printf("(확인하려면 아무 키나 누르십시오.)\n\n");
	_getch();

	system("cls");
	Sleep(1500);
	printf("┌─────────────────────────┐\n");
	printf("│          참가자 명단         │\n");
	printf("│				   	              │\n");
	printf("│   이 실험은 극비에 진행되는        │\n");
	printf("│   수면 실험이다.              │\n");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	printf(".\n");
	Sleep(500);
	printf("이름을 훑어본다.\n\n");
	
	
	while ((db.row = mysql_fetch_row(db.result)) != NULL) {
		Sleep(1000);
		printf(" 이름 : %s\n", db.row[0]);
	}
	Sleep(1000);
	printf("마지막에 보이는 나의 이름.\n\n");
	Sleep(1000);
	printf("여기 사람들도 다....\n\n");
	Sleep(1000);
	printf("이번엔 작은 쪽지가 보인다.\n");
	printf("(확인하려면 아무 키나 누르십시오.)\n\n");
	_getch();

	system("cls");
	Sleep(1000);
	printf(" '어떻게 하시겠습니까?' \n");
	Sleep(1000);
	printf(" '당신 앞에 문이 두 개 있습니다.' \n");
	Sleep(1000);
	printf(" '당신의 선택에 따라 결과는 다릅니다.' \n");
	Sleep(1500);
	printf("정말 문이 두개네.\n");

	printf("어디쪽으로 들어갈까.\n\n");
	printf("1번 문   2번문\n");
	choose = _getch();

	if (choose == '2') {
		system("cls");
		Sleep(1500);
		printf("\n\n들어가는 순간\n");
		Sleep(1000);
		printf("눈 앞이 깜깜해진다.\n");
		Sleep(1000);
		printf("다시 눈을 뜬 순간\n");
		Sleep(1000);
		printf(".\n");
		Sleep(1000);
		printf(".\n");
		Sleep(1000);
		printf(".\n");
		Sleep(1500);
		printf("내가 누워있던 그 곳에서 깨어나있었다.\n");
		Sleep(1500);
		printf("Ending2. Wake Up \n\n");
		_getch();
		return;
	}
	if (choose == '1') {
		system("cls");
		Sleep(1500);
		printf("\n\n들어가는 순간\n");
		Sleep(1000);
		printf("눈 앞이 깜깜해진다.\n");
		Sleep(1000);
		printf("정신을 잃는 기분이다.\n");
		Sleep(1500);
		printf("Ending3. Disappeal \n\n");
		_getch();
		return;
	}



	mysql_close(db.connection);

}