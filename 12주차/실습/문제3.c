#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i = 0, num;
    int arrlen = 5; //�ϴ� �迭�� ���̴� 5�� �ְ�
    int *ptr = (int *)calloc(arrlen, sizeof(int));

    printf("���� �Է� : ");
    scanf("%d", &num);

    while (num != -1)
    {
        if (i > arrlen)
        {
            arrlen += 3;//-1�� �ԷµǱ� �������� 3���� ������Ű��
            ptr = realloc(ptr, sizeof(int) * arrlen); // realloc�� �̿��ؼ� �������� �÷��ش�.
        }
        ptr[i] = num;
        i++;

        printf("���� �Է�: ");
        scanf("%d", &num);
    }

    printf("�迭 ��� : ");
    for (i = 0; i < arrlen; i++)
        printf("%d ", ptr[i]);

    free(ptr);

    return 0;
}