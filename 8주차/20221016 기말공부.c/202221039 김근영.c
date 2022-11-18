/*
#include <stdio.h>
int main(void)
{
	//함수 안 쓰고
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
		//for문 중첩 과정에서 반복되어 잘못 입력된 거 같지만,시간이 부족하여 오류를 찾지 못했습니다.
	} 
	return 0;
}*/




//2번
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
	//printf("%s%s", str1, str2); //Swap함수 호출 전
	Swap(str1, str2); //문자열은 그 자체가 주소 값이기 때문에 &를 따로 붙여주지 않아도 된다.
	printf("%s%s", str1, str2);

	//다른 문자는 잘 작동하는 것 같은데 computer programming만 안되는 것 같습니다.
	//str1의 크기와 str2의 크기를 합쳐서 받아서 오류가나는 것 같다.

}