/*
#include <stdio.h>
int main(void)
{
	int arr1[3][4];
	int arr2[7][9];
	printf("세로3, 가로 4 크기 : %d\n", sizeof(arr1));
	printf("세로7, 가로 9 크기 : %d\n", sizeof(arr2));

	return 0;
}*/
/*
#include <stdio.h>

int main(void)
{
    int arr[10];
    int* pf = arr, * pb = &arr[9];
    int n, i;
    for (i = 0; i < 10; i++)
    {
        printf("int: ");
        scanf_s("%d", &n);
        if (n % 2 == 0)
        {
            *pb = n;
            pb--;
        }
        else
        {
            *pf = n;
            pf++;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
    int numarr[10];
    int num;
    int findex = 0, bindex = 9;
    int i;

    int* fp = numarr;
    int *bp = &numarr[9]
    for (i = 0; i < 10; i++)
    {
        scanf_s("%d", &num);

        if (num % 2 == 1)
        {
            *fp = num;
            fp++;
        }
        else
        {
            *bp = num;
            bp--;
        }
    }
    for (i = 0; i < 10; i++)
    {
        scanf_s("%d", &num);

        if(num%2 == 1)
            numarr
    }
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int JudgePalindrome(char str[]);

int main(void)
{
    char str[100];
    scanf("%s", str);
    if (JudgePalindrome(str) == 1)
        printf("회문 입니다.");
    else
        printf("회문이 아닙니다.");
}

int JudgePalindrome(char str[])
{
    int len = 0, judge;
    for (int i = 0; str[i] != '\0'; i++)
        len++;
    for (int i = 0; i <= len / 2; i++)
    {
        if (str[i] == str[len - 1 - i])
            judge = 1;
        else
        {
            judge = 0;
            break;
        }
    }
    return judge;
}*/


/*
#include <stdio.h>

void sumaver(double* num1, double* num2);

int main(void)
{
    double n1, n2;
    printf("두 개의 실수를 입력하세요 : ");
    scanf_s("%lf %lf", &n1, &n2);
    sumaver(&n1, &n2);

    return 0;
}
void sumaver(double* num1, double* num2)
{
    printf("합계 : %lf", (*num1 + *num2));
    printf("평균 : %lf", (*num1 + *num2) / 2);
}

*/
/*
#include<stdio.h>

void SumAvg(double arr[])
{
    arr[2] = arr[0] + arr[1];
    arr[3] = arr[2] / 2;
}

int main(void)
{
    double arr[4];
    double num1, num2;
    int i;
    scanf_s("%lf %lf", &num1, &num2);
    arr[0] = num1;
    arr[1] = num2;
    SumAvg(arr);
    for (i = 2; i < 4; i++)
    {
        printf("%.2lf\n", arr[i]);
    }
    return 0;
}*/


#include<stdio.h>

int arr1(int* p)

{

    for (int i = 1; i < 100; i++)
    {
        printf("%d ", p[i]);
        i = i * 2;
    }
}

int main()

{
    int arr[101] = { 0, };
    int* p = arr;
    for (int i = 0; i < 100; i++) {

        arr[i] = i + 1;
    }

    arr1(p);

}