/*
//����2
#include <stdio.h>
void Swap(char** ptra, char** ptrb)
{
	char* temp = *ptra;
	*ptra = *ptrb;
	*ptrb = temp;
}
int main(void)
{
	char* pa = "dog";
	char* pb = "cat";

	printf("�Լ� ȣ�� �� : pa : %s, pb : %s\n", pa, pb);
	Swap(&pa, &pb);

	printf("�Լ� ȣ�� �� : pa : %s, pb : %s\n", pa, pb);

	return 0;
	
}*/