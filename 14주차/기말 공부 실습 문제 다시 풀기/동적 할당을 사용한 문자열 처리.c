/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//세 줄의 문장을 입력 받아 파일에 저장한 후
//그 파일을 열어 역순으로 화면에 출력하는 프로그램을 작성하세요.
int main(void)
{
    long fpos;
    FILE* fp = fopen("sentence.txt", "wt");
    int i = 1;
    int line = 3;
    char* str;
    str = (char*)malloc(sizeof(char) * 20 * line);
    //파일에 문자열 입력받기

    printf("아래에 내용을 입력하세요 (끝내려면 빈줄을 입력하세요.) \n");

    gets(str);
    while (str[0] != '\0')
    {
        if (i == line)
        {
            printf("%d줄 출력 완료 realloc을 이용해 길이를 확장합니다.\n엔터 키 누르면 종료\n", i);
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