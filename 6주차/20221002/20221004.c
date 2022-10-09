/*
#include <stdio.h>
int score[5][5]; //계속해서 사용해야 해서 전역 변수에 선언

void fill_score(int(*score)[5]) //5개의 요소를 배열의 주소로 저장?
{
	int sum;
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf_s("%d", &score[i][j]);
			score[i][4] += score[i][j];
		}
		score[i][4] = score[i][j];
	}
}
void sum_subject(void)
{
	int sum = 0;
	int i, j;
	for (i = 0; i < 4; i++)
	{
		sum = 0;
		for (j = 0; j < 4; j++)
		{
			score[j][4] += score[i][j];
			score[4][i] += score[j][i];
			//score[4][i] += score[i][j];
		}
		score[4][4] += score[4][i];
	}
}
void printscore(void)
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("  %d", score[i][j]);
		printf("\n");
	}
}
int main(void)
{

	printf("%d\n", sizeof(score)/sizeof(score[0]));
	printf("%d\n", sizeof(score[0]) / sizeof(int));
	
	fill_score(score);
	sum_subject();
	printscore();

	return 0;
}*/