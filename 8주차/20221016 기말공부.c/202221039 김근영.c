/*
#include <stdio.h>
int main(void)
{
	//�Լ� �� ����
	int arr[3][4] = { {1, 2}, {3, 4, 5}, {6, 7, 8, 9} };
	int* ptr = arr;
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);	
		}
		printf("\n");
	}
	return 0;
}*/
/*
#include <stdio.h>
void print_ddarr(int(*pa[4]))
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", *pa);
		printf("\n");
	}
}
int main(void)
{
	int arr[3][4] = { {1, 2}, {3, 4, 5}, {6, 7, 8, 9} };
	int* ptr = arr;
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			print_ddarr(*(arr + i) + j);
		printf("\n");
		//for�� ��ø �������� �ݺ��Ǿ� �߸� �Էµ� �� ������,�ð��� �����Ͽ� ������ ã�� ���߽��ϴ�.
	} 
	return 0;
}*/




//2��
#include <stdio.h>
void Swap(char** voca1, char** voca2)
{
	char* temp;
	temp = *voca1;
	*voca1 = *voca2;
	*voca2 = temp;
	
}
int main(void)
{
	char str1[20];
	char str2[20];
	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);
	//printf("%s%s", str1, str2); //Swap�Լ� ȣ�� ��
	Swap(str1, str2); //���ڿ��� �� ��ü�� �ּ� ���̱� ������ &�� ���� �ٿ����� �ʾƵ� �ȴ�.
	printf("%s%s", str1, str2);

	//�ٸ� ���ڴ� �� �۵��ϴ� �� ������ computer programming�� �ȵǴ� �� �����ϴ�.
	//str1�� ũ��� str2�� ũ�⸦ ���ļ� �޾Ƽ� ���������� �� ����.

}