/*#include <stdio.h>
int record[5][5];

void WriteRecord(void)
{
	int sum;
	int i, j;
	for (i = 0; i < 4; i++)
	{
		sum = 0;
		printf("%d��° �л��� ���� �Է�\n", i + 1);
		for (j = 0; j < 4; j++)
		{
			printf("���� %d : ", j + 1);
			scanf_s("%d", &record[i][j]);
			sum += record[i][j];
		}
		record[i][4] = sum;
	}
}

void WriteSumRecord(void)
{
	int sum = 0;
	int i, j;

	for (i = 0; i < 4; i++)
	{
		sum = 0;
		for (j = 0; j < 4; j++)
			sum += record[i][j];
		record[4][i] = sum;
		record[4][4] += sum;
	}
}

void ShowAllRecord(void)
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%3d", record[i][j]);
		printf("\n");
	}
}
int main(void)
{
	WriteRecord();
	WriteSumRecord();
	ShowAllRecord();
	return 0;
}*/