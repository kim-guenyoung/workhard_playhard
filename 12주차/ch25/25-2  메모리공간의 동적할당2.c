#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i = 0, num;
    
    int arrlen = 5;
    int* ptr = (int*)calloc(arrlen, sizeof(int));

    printf("정수 입력 : ");
    scanf("%d", &num);

    while (num != -1)
    {
        if (i > arrlen)
        {
            arrlen += 3;
            ptr = realloc(ptr, sizeof(int) * arrlen);
        }
        ptr[i] = num;
        i++;

        printf("정수 입력 : ");
        scanf("%d", &num);
    }

    printf("배열 입력 : ");
    for (i = 0; i < arrlen; i++)
        printf("%d ", ptr[i]);
    
    free(ptr);

    return 0;
}