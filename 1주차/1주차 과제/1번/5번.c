
//5. 정수를 입력 받아 1부터 입력받은 정수까지의 합을 구하는 함수를 작성하여 호출하세요

#include <stdio.h>
int recursive(int n)
{
	if(n > 1)
		return (n + recursive(n - 1));
}
int main(void)
{
	int num;
	scanf_s("%d", &num);
	printf("%d", recursive(num));

	return 0;
}