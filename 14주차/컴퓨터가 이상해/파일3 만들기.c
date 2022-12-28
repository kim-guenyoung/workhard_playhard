/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{

    char ch = 0;
    FILE* src1 = fopen("mystory1.txt", "rt"); //파일을 읽기모드로 열어서
    FILE* src2 = fopen("mystory2.txt", "rt");
    FILE* merge = fopen("merge.txt", "wt"); //여기에 파일을 씀

    if (src1 == NULL || src2 == NULL)
    {
        puts("파일 오픈 실패!");
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