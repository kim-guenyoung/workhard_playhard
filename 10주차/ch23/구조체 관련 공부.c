/*
����ü ������ ������ ������ ������ struct ������ �߰��ؾ� �Ѵ�.
������ �̰��� ���� ������ ���� �ƴϴ�.
int�� ���� num�� ������ ���� ���� int num; �̶� �����ϵ�, person�� ����ü ���� man�� ������ ������
struct ���� ���� ���� person man�̶� �Ϸ��� typedef�� ����ϸ� �ȴ�.

//typedef ����
typedef ������ ������ �����ϴ� �ڷ����� �̸��� �� �̸��� �ο��ϴ� ���� �������� �ϴ� �����̴�.
typedef int INT; //int�� �� �ٸ� �̸� INT�� �ο��ϴ� ���̴�.
�̴� �ڷ����� �̸� int�� INT��� �̸��� �߰��� �ٿ��ش�.�� �ǹ��Ѵ�.
���� ���� ���� INT num; �� ����ϸ� int num; �� ������ ������ �ȴ�.
INT* ptr == int* ptr;
*/
/*
typedef ���� �־� ���ο� �̸��� �ο��� ���� �������� �����ϴ� �ܾ �߽����� �̷������.
typedef name1 name name3;�̸� name3�� �߽��̰�, name3�� �̸��� �ȴ�.
���� �ο��� �̸�			��� �ڷ���
INT							int
PTR_INT						int *
UINT					unsigned int
PTR_UINT				unsigned int *
UCHAR					unsigned char 
PTR_UCHAR				unsigned char *
*/
/*
struct point
{
	int xpos;
	int ypos;
};
typedef struct point Point; //struct point�� Point��� �̸��� �ο�

�̰͵� �ǰ�
typedef struct point
{
	int xpos;
	int ypos;
}Point;

struct point
{
	int xpos;
	int ypos;
};
typedef struct point Point;*/
/*
//����ü�� �̸� ����
typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;

typedef struct
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;
*/
//struct perosn man; //�Ұ����� ����

/*
//�Լ��� ���ڷ� ���޵ǰ� return ���� ���� ��ȯ�Ǵ� ����ü ����
void SimpleFunc(int num)
{
}
int main(void)
{
	int age = 24;
	SimpleFunc(age); //age�� ����� ���� �Ű����� num�� ����(����)��
}*/
/*
typedef struct sbox //����ü sbox ����
{
	int mem1;
	int mem2;
	double mem3;
}Sbox;

typedef union ubox //����ü ubox ����
{
	int mem1;
	int mem2;
	double mem3;
}Ubox;
//���� �ڵ忡�� ���ҵ� ���� ��Ŀ��� ������ �������� struct ������ �ϴ���, union ������ �ϴ³Ĵ�
//������ ������ ������ �޸� ������ �Ҵ�Ǵ� ��İ� ������ ��������� ���̰� �ִ�.
printf("%d\n", sizeof(Sbox)); //16
printf("%d\n", sizeof(Ubox)); //8
//���⼭ 16�� ��� ����� ũ�⸦ ���� ����̰�, 8�� ��� �� ���� ũ�Ⱑ ū double�� ���� �����.
*/

/*
�̹��� �Ұ��ϴ� �������̶�� �͵� ����ü�� ����ü�� ���������� �ڷ����� �����ϴ� �پ����� ����� �ȴ�.
���� ������ ����� �ڷ��� ���ǹ���� ����ü �� ����ü�� �����ϰ�
���ǵ� ������ ����� ���� ���� ����� ����ü �� ����ü�� ���� �����ϴ�.
//�������� ���ǿ� ������ ����
���������� syllable�̶�� �̸��� �ڷ����� �����Ѵٴ� ����
syllable�� ������ ������ ������ ���� ������ �����ϰڴٴ� ���̴�.
����ü�� ����ü ���� ��쿡�� �ڷ����� ������ ���ؼ� ����� ������ ���� ������ �����Ͽ���.
������ �������� ��쿡�� ������ ������ �� ��ü�� ������ ���·� �����Ѵ�.

enum syllable
{
	Do = 1, Re = 2, Mi = 3, Fa = 4, So = 5, La = 6, Ti = 7
};
��� ���� ���ǹ���� ����ü�� ���̰� �־� ���̳� �⺻ ������ �����ϴ�.
struct ��ſ� enum�� �԰�, ����ü�� ���ǹ�İ� ���������� enum�� �̾ �ڷ����� �̸� syllable�� �����Ͽ���.
	�׸��� syllable�� ���õ� ������ �߰�ȣ �ȿ� ����Ǿ���.
	Do = 1 //�̴� Do�� ���� 1�� �ǹ��ϴ� ����� �����Ѵ�. �׸��� �� ���� syllable �� ������ ������ �����ϴٴ� ���̴�.
*/