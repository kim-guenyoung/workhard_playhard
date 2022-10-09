/*
// 4. 정수를 입력 받아 1부터 입력받은 정수까지의 합을 구하는 함수를 작성하여 호출하고 합을 계산한 결과를 출력하세요.
// (조건1)5의 배수인 것은 제외하고 합하기

// (조건2) 합이 1000을 넘어가면 더이상 합하지 않기


#include <stdio.h>
int Recursive(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		int sum = 0;
		sum = (n + Recursive(n - 1)); //팩토리얼 함수를 만들 때처럼 재귀 호출을 이용

		if ((n % 5) == 0)
			sum -= n;

		if (sum > 1000)
			return -1;

		else //1000안 넘으면 상관없이 계속 더함
			return sum;
	}
}
int main(void)
{
	int num;
	scanf_s("%d", &num);

	if (Recursive(num) == -1)
		printf("합이 1000보다 작은 값까지만 더할 수 있음\n");
	printf("%d", Recursive(num));

	return 0;
}*/