/*
//과제2
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

	printf("함수 호출 전 : pa : %s, pb : %s\n", pa, pb);
	Swap(&pa, &pb);

	printf("함수 호출 후 : pa : %s, pb : %s\n", pa, pb);

	return 0;
	
}*/