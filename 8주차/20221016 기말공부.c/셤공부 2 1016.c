/*
#include<stdio.h>

int main(void)
{
    int arr[10] = { 0, };
    int *fptr = &arr;
    int *bptr = &arr[9];
    int num, i;
    for (i = 0; i < 10; i++)
    {
        scanf_s("%d", &num);
        if (num % 2 == 1)
        {
            *fptr = num;
            fptr++;
        }
        else
        {
            *bptr = num;
            bptr--;
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

int main()
{
    int arr[10];
    int* parr = arr;
    int num, i, * fp = arr, * fb = arr + sizeof(arr) / sizeof(int) - 1;
    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        scanf_s("%d", &num);
        if (num % 2 == 1)
        {
            *fp = num;
            fp++;
        }
        else
        {
            *fb = num;
            fb--;
        }
    }
    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("%d ", arr[i]);
    }
}*/
/*
#include <stdio.h>

int main(void)
{
    int arr[10] = { 0, };
    int i, j;
    int temp;

    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
        scanf_s("%d", &arr[i]);
    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        for (j = 0; j < sizeof(arr) / sizeof(int) - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        //오름차순
        //printf("%d ", arr[i]);
    }
    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] % 2 == 1)
            printf("%d ", arr[i]);
    }
    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        for (j = 0; j < sizeof(arr) / sizeof(int) - 1; j++)
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char voca[50];
    char voca2[50];
    char i;
    int len = 0;
    printf("입력 : ");
    scanf("%s", voca);
    for (i = 0; voca[i] != '\0'; i++)
        len++;
    for (i = 1; i <= len; i++)
    {
        voca2[len - i] = voca[i - 1];
    }
    for (i = 0; i < len; i++)
    {
        if (voca2[i] == voca[i])
        {
            printf("회문입니다.");
            break;
        }
        else
        {
            printf("회문이 아닙니다.");
            break;
        }
    }
    return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct User
{
    char name[20];
    int age;
};

int main(void)
{
    struct User profile[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        gets_s(profile.name[i], sizeof(profile.name), stdin);

        printf("나이 : ");
        scanf("%d", &profile[i].age);
    }
    for (i = 0; i < 2; i++)
    {
        if (!strcmp(profile[0].name, profile[1].name))
            puts("두 사람의 이름은 같습니다.");
        else
            puts("두 사람의 이름이 같지 않습니다.");
    }

    for (i = 0; i < 2; i++)
    {
        if (profile[0].age == profile[1].age)
            puts("두 사람의 나이는 같습니다.");
        else
            puts("두 사람의 나이는 같지 않습니다.");
    }

}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    char user1[20];
    char user2[20];
    fgets(user1, sizeof(user1), stdin);
    fgets(user2, sizeof(user2), stdin);
    
    
}*/