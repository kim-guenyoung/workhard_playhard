/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct telnode
{
    char name[20];
    char phoneNum[20];
    struct telnode* next;
}TelNode;

int main(void)
{
    TelNode* list = NULL;
    TelNode* prev = NULL, * p, * next;

    char sick[20];
    char buffer[20];
    char phoneNum[20];
    int i = 0;

    while (1)
    {
        printf("%d번째 사람\n이름 : ", i + 1);
        gets(buffer);
        if (buffer[0] == 'q' && buffer[1] == '\0' && i >= 5)
            break;
        else if (buffer[0] == 'q' && buffer[1] == '\0' && i < 5)
        {
            printf("5명 이상 입력해야 합니다.\n");
            continue;
        }
        p = (TelNode*)malloc(sizeof(TelNode));

        strcpy(p->name, buffer);

        printf("번호 : ");
        gets(buffer);
        strcpy(p->phoneNum, buffer);
        printf("\n");

        if (list == NULL)
            list = p;
        else
        {
            prev->next = p;
            p->next = NULL;
        }
        prev = p;
        i++;
    }
    p = list;
    printf("전학 간 사람 입력 : ");
    scanf("%s", sick);
    while (1)
    {
        if (p->next != NULL)
        {
            if (strcmp(p->name, sick) == 0)
            {
                printf("%s님이 전학갔습니다. 앞으로는 %s는 %s에게 연락을 해야 합니다.\n", sick, p->next->name, p->next->next->name);
                printf("%s의 전화번호는 %s입니다.\n", p->next->next->name, p->next->next->phoneNum);
                p = p->next;
                free(p);
            }
            else if (strcmp(p->next->name, sick) == 0)
            {
                if (p->next->next->name == NULL)
                {
                    printf("%s이 연락을 받았습니다. 모든 구성원들에게 연락을 했습니다.\n", p->name);
                    break;
                }
                printf("%s님이 전학갔습니다. 앞으로는 %s는 %s에게 연락을 해야 합니다.\n", sick, p->name, p->next->next->name);
                printf("%s의 전화번호는 %s입니다.\n", p->next->next->name, p->next->next->phoneNum);
                p = p->next;
            }
            else
            {
                printf("%s는 %s에게 연락을 해야합니다.\n", p->name, p->next->name);
                printf("%s의 전화번호는 %s입니다.\n", p->next->name, p->next->phoneNum);
            }
            p = p->next;
        }
        else
        {
            printf("%s이 연락을 받았습니다. 모든 구성원들에게 연락을 했습니다.\n", p->name);
            break;
        }
    }
    p = list;
    while (p != NULL)
    {
        next = p->next;
        free(p);
        p = next;
    }
    return 0;
}*/