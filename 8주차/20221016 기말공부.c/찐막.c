/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char user1[20];
	char user2[20];
	int i, j;
	int cnt = 0;
	fgets(user1, sizeof(user1), stdin);
	user1[strlen(user1) - 1] = 0;

	fgets(user2, sizeof(user2), stdin);
	user2[strlen(user2) - 1] = 0;

	for (i = 0; user1[i] != ' '; i++)
	{
		user1[i] == i;
	}
	for (j = 0; user2[j] != ' '; j++)
	{
		user2[i] == j;
	}

	if (i == j)
	{
		for (i = 0; user1[i] != ' '; i++)
			if (!strncmp(user1, user2, i) == 0)
				cnt++;
		{
			if (cnt != 0)
			puts("이름이 같습니다.");
		}
	}

	else
		puts("이름이 같지 않습니다.");

	int age1, age2;
	age1 = atoi(&user1[i + 1]);
	age2 = atoi(&user2[j + 1]);

	if (age1 == age2)
		puts("나이가 같습니다.");
	else
		puts("나이가 같지 않습니다.");

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int* fptr = &arr[0];
	int* bptr = &arr[5];
	int i;
	int temp;

	for (i = 0; i < 3; i++)
	{
		temp = *fptr;
		*fptr = *bptr;
		*bptr = temp;
		fptr += 1;
		bptr -= 1;
	}
	for (i = 0; i < 6; i++)
		printf("%d ", arr[i]);
	return 0;
}*/

//const int*ptr = &num;
//num = 40
//포인터 변수 ptr을 이용해 ptr이 가리키는 변수에 저장된 값을 변경하지 못하게
//int* const ptr = &num;
//*ptr = 40;
//포인터 변수 ptr이 상수라는 뜻으로 주소 값이 지정되면, 그 값의 변경이 불가능하다.

