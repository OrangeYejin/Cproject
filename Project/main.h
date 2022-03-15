#pragma once	//메인 헤터파일
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define WIDTH 95		//창 너비
#define HEIGHT 45		//창 높이

char choose;

void init(void);		//초기화 함수
void menu(void);		//메뉴 함수
void story(void);		//스토리 시작 함수(게임 시작)
void howto(void);		//설명
void gotoxy(int x, int y);