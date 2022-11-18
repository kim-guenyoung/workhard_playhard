#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i = 0, num;
    int arrlen = 5; //일단 배열의 길이는 5를 주고
    int *ptr = (int *)calloc(arrlen, sizeof(int));

    printf("정수 입력 : ");
    scanf("%d", &num);

    while (num != -1)
    {
        if (i > arrlen)
        {
            arrlen += 3;//-1이 입력되기 전까지는 3개씩 증가시키고
            ptr = realloc(ptr, sizeof(int) * arrlen); // realloc을 이용해서 힙영역을 늘려준다.
        }
        ptr[i] = num;
        i++;

        printf("정수 입력: ");
        scanf("%d", &num);
    }

    printf("배열 출력 : ");
    for (i = 0; i < arrlen; i++)
        printf("%d ", ptr[i]);

    free(ptr);

    return 0;
}