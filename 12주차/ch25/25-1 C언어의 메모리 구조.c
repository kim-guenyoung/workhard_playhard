
#include <stdio.h>
void func2(int n)
{
	int num3 = n + 1;
	printf("%d\n", num3);
}
void func1(int n)
{
	int num2 = n + 1;
	printf("%d\n", num2);
	func2(num2);
}
int main(void)
{
	int num1 = 20;
	printf("%d\n", num1);
	func1(num1);
	return 0;
}