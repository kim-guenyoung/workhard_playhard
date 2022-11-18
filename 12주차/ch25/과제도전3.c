/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void)
{
    int i;
    char buffer[100];
    char list[10][100];
    FILE* f, * p;
    f = fopen("mystory.txt", "r");
    p = fopen("Reverse.txt", "w");
    for (i = 0; i < 10; i++)
    {
        fgets(buffer, 100, f);
        strcpy(list[i], buffer);
    }
    for (i = 9; i > -1; i--)
    {
        fputs(list[i], p);
    }

    return 0;
}*/