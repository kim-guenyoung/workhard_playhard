
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pos
{
	int xpos;
	int ypos;
}Pos;


int main(void)
{
	Pos pos1, pos2, pos3, pos4, pos5;
	int sum_x, sum_y;
	int i;
	int num[10];
	Pos* p = (Pos*)malloc(sizeof(int) * 5);

	FILE* fp = fopen("pos.txt", "wt");

	fprintf(fp, "���� 10�� �Է�\n");

	if (fp == NULL)
	{
		puts("���� ���� ����");
		return -1;
	}

	fputs("ù ��° ��ǥ: ", stdout);
	gets(&pos1.xpos, &pos1.ypos);
	//fputs(pos1.xpos, pos1.ypos, fp);
	//fputs("\n", fp);

	fputs("�� ��° ��ǥ: ", stdout);
	gets(&pos2.xpos, &pos2.ypos);
	//fputs(pos2.xpos, pos2.ypos, fp);
	//fputs("\n", fp);


	fputs("�� ��° ��ǥ: ", stdout);
	gets(&pos3.xpos, &pos3.ypos);
	//fputs(pos3.xpos, pos3.ypos, fp);
	//fputs("\n", fp);

	fputs("�� ��° ��ǥ: ", stdout);
	gets(&pos4.xpos, &pos4.ypos);
	//fputs(pos4.xpos, pos4.ypos, fp);
	//fputs("\n", fp);

	fputs("�ټ� ��° ��ǥ: ", stdout);
	gets(&pos5.xpos, &pos5.ypos);

	sum_x = pos1.xpos + pos2.xpos + pos3.xpos + pos4.xpos + pos5.xpos;
	sum_y = pos1.ypos + pos2.ypos + pos3.ypos + pos4.ypos + pos5.ypos;
	//fputs(pos5.xpos, pos5.ypos, fp);
	//fputs("\n", fp);

	//fputs(pos1.xpos, pos1.ypos, fp);
	//fputs("\n", fp);
	
	/*
	for (i = 0; i < 2; i++)
	{
		printf("���� %d�Է� : ", i + 1);
		Pos *ppos1, pos1;
		ppos1 = &pos1;
		gets(pos1.xpos);
		fputs(pos1.xpos, fp);
		gets(pos1.ypos);
		fputs(pos1.ypos, fp);
		fputs("\n", fp);
	}
	for (i = 0; i < 10; i++)
	{
		printf("���� %d�Է� : ", i + 1);
		gets(num);
		fputs(num, fp);
		fputs("\n", fp);
		Pos pos2;
		pos2.xpos = num;
		pos2.ypos = num;
	}
	
	//fp = fopen("pos.txt", "rt");
	//{

	//}*/

	//printf("x��ǥ�� �� : %d, y��ǥ�� �� : ", sum_x, sum_y);
	free(p);
	return 0;
}