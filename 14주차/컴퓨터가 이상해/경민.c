#include <stdio.h>

int main(void)
{
	int a = 90, b = 20, c = 30, d = 40, e = 50, f = 60, * p;
	p = &a;

	printf("변수    주소    값    포인터\n");
	int i;
	for (i = 0; i < 6; i++)
	{
		printf("%4d    %4X \n", *(p + i), (p + i));
	}
}