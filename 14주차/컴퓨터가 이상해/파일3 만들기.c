/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{

    char ch = 0;
    FILE* src1 = fopen("mystory1.txt", "rt"); //������ �б���� ���
    FILE* src2 = fopen("mystory2.txt", "rt");
    FILE* merge = fopen("merge.txt", "wt"); //���⿡ ������ ��

    if (src1 == NULL || src2 == NULL)
    {
        puts("���� ���� ����!");
        return -1;
    }
    while ((ch = fgetc(src1)) != EOF)
    {
        fputc(ch, merge);
    }
    while ((ch = fgetc(src2)) != EOF)
    {
        fputc(ch, merge);
    }

    fclose(src1);
    fclose(src2);
    fclose(merge);
}*/