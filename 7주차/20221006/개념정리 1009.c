/*#include <stdio.h>
int main(void)
{
    int a; //������ ���� a ����
    int* b; //������ ���� b ����

    b = &a; //a�� �ּ� ���� b�� ����
    printf("���� a�� �ּ� : %d", &a);
    printf("���� a�� �ּ� : %d", b);
}*/
/*
//�ּҷ� ���� �� �����ϱ�
//������ ���� a�� �����ϰ�, 'A'�� �����ϰ�, ������ ���� a�� ����Ű�� ������ ���� b�� ����
//������ ���� b�� ���� a�� ���� A -> B�� ��������
//�� ���� ����� ����Ǿ����� Ȯ�� �� a�� �ּ� ���� ����غ���.
#include <stdio.h>
int main(void)
{
    char a;
    a = 'A';
    char* b;
    printf("a�� ���� %c\n", a);

    b = &a;
    *b = 'B';
 
    printf("a�� ���� %c\n", *b);
    printf("a�� �ּ� ���� %d\n", &a);
    printf("a�� �ּ� ���� %d\n", b);
}*/
/*
#include <stdio.h>
int main(void)
{
    float a;
    double b;
    int* c;
    long* d;
    float* e;
    double* f;

    printf("float �Ǽ��� ������ ũ��� %d\n", sizeof(a));
    printf("double �Ǽ��� ������ ũ��� %d\n", sizeof(b));
    printf("int ������ ������ ũ��� %d\n", sizeof(c));
    printf("long ������ ������ ũ��� %d\n", sizeof(d));
    printf("float ������ ������ ũ��� %d\n", sizeof(e));
    printf("double ������ ������ ũ��� %d\n", sizeof(f));
}*/
/*
#include <stdio.h>
void Swap(int x, int y);
int main(void)
{
    int x, y;
    x = 1, y = 2;
    printf("x = %d, y = %d\n", x, y);
    Swap(x, y);
    printf("x = %d, y = %d\n", x, y);
}
void Swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    //�� �ٲ�
}*/
/*
//�迭�� �ּ��� ���� Ȯ���ϱ�
#include <stdio.h>
int main(void)
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int i;
    for (i = 0; i < 5; i++)
        printf("arr[%d]�� �ּ� : %p\n", i, &arr[i]);
    printf("�迭�� �̸��� %p", arr);//�迭�� �̸��� �ּ�/?
}*/
/*
#include <stdio.h>
int main(void)
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int* b = arr; //arr ù ��° �׸��� �ּ� ���� ������ ���� b�� ����
    int i;

    printf("arr[0]�� �ּҴ� %d\n", &arr[0]);
    printf("������ b + 0�� ���� %d\n", b);

    b += 1;
    printf("arr[1]�� �ּҴ� %d\n", &arr[1]);
    printf("������ b + 1�� ���� %d\n", b);
    b += 1;
    printf("arr[2]�� �ּҴ� %d\n", &arr[2]);
    printf("������ b + 2�� ���� %d\n", b);
    b += 1;
    printf("arr[3]�� �ּҴ� %d\n", &arr[3]);
    printf("������ b + 3�� ���� %d\n", b);
    b += 1;
    printf("arr[4]�� �ּҴ� %d\n", &arr[4]);
    printf("������ b + 4�� ���� %d\n", b);
    printf("\n");

    b = arr;

    for (i = 0; i < 5; i++)
    {
        printf("arr[%d]�� �ּҴ� %d\n", i, &arr[i]);
        printf("������ b + %d = %d\n", i, b);
        b += 1;
    }
}*/
/*
#include <stdio.h>
int main(void)
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int* b = arr; //arr ù ��° �׸��� �ּ� ���� ������ ���� b�� ����
    int i;
    
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("arr�� �� ��ҿ� 10�� ���Ͽ� ����\n");
    
    for (i = 0; i < 5; i++)
        *(b + i) += 10;
    printf("����� �迭 arr�� �� ��� : ");

    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for (i = 0; i < 5; i++)
        printf("%d ", *(b + i));
    printf("\n");
}*/
/*
//�������� �ּҸ� ��� �ִ� ������ �迭 �����
#include <stdio.h>
int main(void)
{
    int a = 10;
    int b = 20;
    int c;

    int* x[3];
    x[0] = &a;
    x[1] = &b;
    x[2] = &c;
    *x[2] = *x[0] + *x[1]; //�������Ͽ� ���� a�� b�� ����

    printf("c�� �� : %d\n", c);
}*/
/*
#include <stdio.h>

int main(void)
{
    int a[2][3] = { 1, 2, 3, 4, 5, 6 };

    printf("�迭 a�� ù ��° �ּҴ� %p\n", a);
    printf("�迭 a�� �� ��° �ּҴ� %p\n", a + 1); // a + 1�� a[1]�� ����
    printf("�迭 a�� ���� ù ��° �迭�� ù ��° �� �ּҴ� %p\n", a[0]);

    printf("�迭 a�� ���� ù ��° �迭�� �� ��° �� �ּҴ� %p\n", a[0] + 1);
    printf("�迭 a�� ���� ù ��° �迭�� �� ��° �� �ּҴ� %p\n", a[0] + 2);
    printf("�迭 a�� ���� �� ��° �迭�� ù ��° �� �ּҴ� %p\n", a[1]);
    printf("�迭 a�� ���� �� ��° �迭�� �� ��° �� �ּҴ� %p\n", a[1] + 1);
    printf("�迭 a�� ���� �� ��° �迭�� �� ��° �� �ּҴ� %p\n", a[1] + 2);
}*/

//2���� �迭�� �̿��ϴ� ��
