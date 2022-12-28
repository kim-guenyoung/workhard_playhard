/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[100]; // 100자까지 입력 가능
    char* str1[100]; // 최대 문자열 100개까지 가능
    char str2[100][100] = { 0, };
    int cnt = 0;
    int i = 0;

    FILE* fp = fopen("sentence.txt", "wt");

    if (fp == NULL)
    {
        printf("파일 오픈 실패!\n");
        return -1;
    }

    puts("end 입력 시 종료");
    while (1)
    {
        printf("입력 : ");
        gets(str, sizeof(str), stdin);
        str1[i] = (char*)malloc(strlen(str) + 1); // 문자열만큼 저장 공간 할당

        strcpy(str1[i], str); // 문자열 옮겨줌

        if (strcmp("end", str1[i]) == 0)
            break;
        fprintf(fp, "%s\n", str1[i]); // 파일에 출력
        cnt++;
        i++;
    }
    //for (i = 0; i <= cnt; i++)
    //    free(str1[i]); //동적 할당 반환해줌
    fclose(fp);

    fp = fopen("sentence.txt", "rt");
    if (fp == NULL)
    {
        printf("파일 오픈 실패!\n");
        return -1;
    }
    cnt = 0;
    //str2를 왜 만들어줬냐면, str1을 free해주었으니까 무조건 str2로 받아주어야 한다.
    fseek(fp, 0, SEEK_SET);
    while (1)
    {
        fgets(str2[cnt], sizeof(str2[cnt]), fp);
        cnt++;
        if (feof(fp))
            break;
    }

    for (i < cnt; i >= 0; i--)
    {
        printf("%s", str2[i]);
    }

    fclose(fp);
    return 0;
}*/