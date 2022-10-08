/*#include <stdio.h>
int main(void)
{
	int* arr1[5];
	int* arr2[3][5];

	int** ptr1 = arr1;
	
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[3][2] = { {1, 2}, {3, 4}, {5, 6} };

	printf("%p\n", arr);

	printf("%p %p\n", &arr[1][0], &arr[0][1]);
	printf("%d %d\n\n", arr[1][0], arr[0][1]);
	
	
	printf("%p %p\n", &(*(arr[2] + 1)), &(*(arr[1] + 1)));
	printf("%d %d\n\n", *(arr[2] + 1), *(arr[1] + 1));
	
	printf("%p %p\n", &((*arr + 2)[0]), &((*(arr + 0))[1]));
	printf("%d %d\n\n", (*arr + 2)[0], (*(arr + 0))[1]);
	
	printf("%p %p\n", &(**arr), &(*(*(arr + 0) + 0)));
	printf("%d %d\n", **arr, *(*(arr + 0) + 0));
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[2][2][2] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	printf("%d\n", arr[1][0][1]);

	printf("%d\n", (*(arr[1] + 0))[1]);
	printf("%d\n", *(*(arr[1] + 0)+1));
}*/
/*
#include <stdio.h>
int main(int argc, char* argv[])
{
	int i = 0;
	printf("전달된 문자열의 수 : %d\n", argc);

	for (i = 0; i < argc; i++)
		printf("%d번째 문자열 : %s\n", i + 1, argv[i]);

	return 0;
}*/