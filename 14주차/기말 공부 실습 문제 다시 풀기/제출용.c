/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�� ���� ������ �Է� �޾� ���Ͽ� ������ ��
//�� ������ ���� �������� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��ϼ���.
int main(void)
{
    long fpos;
    FILE* fp = fopen("sentence.txt", "wt");
    int i = 1;
    int line = 3;
    char* str;
    str = (char*)malloc(sizeof(char) * 20 * line);
    //���Ͽ� ���ڿ� �Է¹ޱ�

    printf("�Ʒ��� ������ �Է��ϼ��� (�������� ������ �Է��ϼ���.) \n");

    gets(str);
    while (str[0] != '\0')
    {
        if (i == line)
        {
            printf("%d�� ��� �Ϸ� realloc�� �̿��� ���̸� Ȯ���մϴ�.\n���� Ű ������ ����\n", i);
            line += 1;
            str = realloc(str, sizeof(char) * 20 * line);
            fflush(stdin);
        }
        fputs(str, fp);
        fputs("\n", fp);
        gets(str);
        i++;
    }
    fclose(fp);
    free(str);
    return 0;
}*/