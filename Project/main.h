#pragma once	//���� ��������
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define WIDTH 95		//â �ʺ�
#define HEIGHT 45		//â ����

char choose;

void init(void);		//�ʱ�ȭ �Լ�
void menu(void);		//�޴� �Լ�
void story(void);		//���丮 ���� �Լ�(���� ����)
void howto(void);		//����
void gotoxy(int x, int y);