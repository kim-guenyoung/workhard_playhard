/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[100]; // 100�ڱ��� �Է� ����
    char* str1[100]; // �ִ� ���ڿ� 100������ ����
    char str2[100][100] = { 0, };
    int cnt = 0;
    int i = 0;

    FILE* fp = fopen("sentence.txt", "wt");

    if (fp == NULL)
    {
        printf("���� ���� ����!\n");
        return -1;
    }

    puts("end �Է� �� ����");
    while (1)
    {
        printf("�Է� : ");
        gets(str, sizeof(str), stdin);
        str1[i] = (char*)malloc(strlen(str) + 1); // ���ڿ���ŭ ���� ���� �Ҵ�

        strcpy(str1[i], str); // ���ڿ� �Ű���

        if (strcmp("end", str1[i]) == 0)
            break;
        fprintf(fp, "%s\n", str1[i]); // ���Ͽ� ���
        cnt++;
        i++;
    }
    //for (i = 0; i <= cnt; i++)
    //    free(str1[i]); //���� �Ҵ� ��ȯ����
    fclose(fp);

    fp = fopen("sentence.txt", "rt");
    if (fp == NULL)
    {
        printf("���� ���� ����!\n");
        return -1;
    }
    cnt = 0;
    //str2�� �� �������ĸ�, str1�� free���־����ϱ� ������ str2�� �޾��־�� �Ѵ�.
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