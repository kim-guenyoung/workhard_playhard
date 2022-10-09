/*
//실습 문제 1
#include <stdio.h>
int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;
	int i;
	for (i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		*(ptr + i) += 2;
		printf("%d ", arr[i]);
	}
	return 0;
}
*/
/*
//실습 문제2
#include <stdio.h>
int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;
	int i;
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		*(ptr + i) += 2;
		printf("%d ", *(ptr + i));
	}
	return 0;
}*/

/*
//실습 문제3

#include <stdio.h>
int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr[4];
	int i;
	int sum= 0;

	
	for (i = sizeof(arr) / sizeof(int) - 1; i >= 0; i--)
	
		sum += *(ptr++);
	
	printf("%d ", sum);
	return 0;
*/
/*
#include <stdio.h>

int main(void)
{
	char arr[20] = { "computerprogramming" };
	int i;
	for (i = 0; i < 20; i++)
		if (arr[i] == 'e')
		{
			printf("%d", i);
			break;
		}
}*/
/*
#include <stdio.h>
int main(void)
{
	char a[] = "computerprogramming";
	char* p = a;
	int i;

	for (i = 0; a[i] != '\0'; i++)
		if (*(p+ i) == 'e')
			printf("%d", i);

}*/

//실습 문제4
#include <stdio.h>
int main(void)
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int* fptr = arr;
	int* bptr = &arr[5];
	int i;

	for (i = 0; i < 3; i++)
		printf("%d ", *(bptr - i));
	for (i = 3; i < 6; i++)
		printf("%d ", *(fptr + i));
}