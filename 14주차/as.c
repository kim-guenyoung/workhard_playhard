#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct telnode
{
    char name[20];
    char phoneNum[20];
    struct telnode *next;
} TelNode;

int main(void)
{
    TelNode *list = NULL;
    TelNode *prev = NULL, *p, *next;
    char buffer[20];
    int i = 0;

    while (1)
    {
        printf("%d : �̸� �Է� : ", i + 1);
        gets(buffer);
        if (buffer[0] == 'q' && i >= 5)
            break;
        else if (buffer[0] == 'q' && i < 5)
        {
            printf("5�� �̻� �Է��ؾ� �մϴ�.\n");
            printf("%d : �̸� �Է� : ", i + 1);
            gets(buffer);
        }
        p = (TelNode *)malloc(sizeof(TelNode));
        printf("%d : ��ȭ��ȣ �Է� : ", i + 1);
        gets(buffer);

        p = (TelNode *)malloc(sizeof(TelNode));
        i++;
    }

    return 0;
}
