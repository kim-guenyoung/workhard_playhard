/*
#include <stdio.h>
#include <stdlib.h>

typedef struct BOOK
{
    char name[20];
    char number[20];
}book;
int main(void)
{
    int count = 0;
    int i = 0;
    book* p;
    int arrlen = 5;
    p = (book*)malloc(arrlen * sizeof(book));

    if (p == NULL)
    {
        printf("메모리할당오류\n");
        return -1;
    }
    while (1)
    {
        if ((p[i].number == 'q' || p[i].name == 'q') && i >= 5)
            return 0;

        else if ((p[i].number == 'q' || p[i].name == 'q') && i >= 1 || i <= 5)
        {
            puts("최소 5명은 입력해야 합니다.\n");
        }
        else
        {
            printf("이름을 입력하세요: ");
            gets(p[i].name);
            printf("휴대폰 번호를 입력하세요: ");
            gets(p[i].number);

            p = (int*)realloc(p, sizeof(int) * arrlen);
        }
        i++;
    }
    printf("이름\t휴대폰 번호\n");
   for (i = 0; i < count; i++)
        printf("%s\t%s\n", p[i].name, p[i].number);
        
    free(p);
    return 0;
}*/