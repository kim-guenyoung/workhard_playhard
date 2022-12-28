/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

typedef struct student
{
    char id[20]; //학번
    char name[20]; //이름
    char phoneNum[20]; //전번
    char address[20]; //주소
}stu;

stu arr[3];

int main(void)
{
    int member;
    printf("몇 명 입력할 건가요?");
    scanf("%d", &member);
    FILE* fp = fopen("info.txt", "wt");
    int i;

    for (i = 0; i < member; i++)
    {
        printf("%d번째 사람\n", i + 1);
      
        fputs("id : ", stdout);
        getchar();
        fgets(arr[i].id, sizeof(arr[i].id), stdin);

        fputs("name : ", stdout);
        fgets(arr[i].name, sizeof(arr[i].name), stdin);

        fputs("phoneNum : ", stdout);
        fgets(arr[i].phoneNum, sizeof(arr[i].phoneNum), stdin);

        fputs("address : ", stdout);
        fgets(arr[i].address, sizeof(arr[i].address), stdin);

    }

    int j;
    char temp_id[20];
    char  temp_name[20];
    char temp_phoneNum[20];
    char temp_address[20];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3 - (i + 1); j++)
        {
            if (strcmp(arr[j].id, arr[j + 1].id) > 0)
            {
                strcpy(temp_id, arr[j].id);
                strcpy(temp_name, arr[j].name);
                strcpy(temp_phoneNum, arr[j].phoneNum);
                strcpy(temp_address, arr[j].address);

                strcpy(arr[j].id, arr[j + 1].id);
                strcpy(arr[j].name, arr[j + 1].name);
                strcpy(arr[j].phoneNum, arr[j + 1].phoneNum);
                strcpy(temp_address, arr[j].address);

                strcpy(arr[j + 1].id, temp_id);
                strcpy(arr[j + 1].name , temp_name);
                strcpy(arr[j + 1].phoneNum, temp_phoneNum);
                strcpy(temp_address, arr[j].address);

            }
        }
    }

    for (i = 0; i < member; i++)
    {
        fprintf(fp, "%s %s %s %s\n", arr[i].id, arr[i].name, arr[i].phoneNum, arr[i].address);
    }
    return 0;
}*/