/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int cnt, std, sum = 0;
	int* score;
	float avg = 0;

	printf("�л� �� �Է� : ");
	scanf("%d", &std);

	score = (int*)malloc(std * sizeof(int));

	if (score == NULL)
	{
		printf("���� �޸� �Ҵ� ���� �߻�\n");
		return 0;
	}
	for (cnt = 0; cnt < std; cnt++)
	{
		printf("�л� # %d - %d ���� �Է� : ", std, cnt + 1);
		scanf("%d", &score[cnt]);
		sum += score[cnt];
	}
	printf("���� : %d\n\n", sum);
	for (cnt = 0; cnt < std; cnt++)
	{
		printf("�л� # %d - %d ���� ��� : %d\n", std, cnt + 1, score[cnt]);
	}
	avg = (float)sum / std;
	printf("������� : %.2f\n", avg);
	free(score);
	return 0;
}*/