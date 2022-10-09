#include <stdio.h>
#include <stdlib.h>  // rand()함수를 포함하는 라이브러리
#include <time.h>   // time()함수를 포함하는 라이브러리

int main(void)
{

	srand(time(NULL)); // 매번 다른 난수가 발생하도록 하기 위해서 사용
	char choice[10];
	int win = 0, draw = 0;
	printf("가위? 바위? 보 : ");

	char rps[3][5] = { "가위", "바위", "보" };
	
	while (1)
	{
		int random = rand() % 3;
		gets(choice, sizeof(choice), stdin);
		printf("당신은 %s 선택, 컴퓨터는 %s 선택, ", choice, rps[random]);
		if (!strcmp(choice, rps[random]))
		{
			puts("비겼습니다.");
			draw++;
		}
		//strcmp (이용해서 입력한 것이 가위와 같으며, 난수가 '보'와 같으면 당신이 이겼습니다 출력
		else if (strcmp(choice, "가위") == 0 && strcmp(rps[random], "보") == 0 || strcmp(choice, "바위") == 0 && strcmp(rps[random], "가위") == 0 || strcmp(choice, "보") == 0 && strcmp(rps[random], "바위") == 0)
		{
			puts("당신이 이겼습니다.\n");
			win++;
		}
		else if (strcmp(choice, "가위") == 0 && strcmp(rps[random], "바위") == 0 || strcmp(choice, "바위") == 0 && strcmp(rps[random], "보") == 0 || strcmp(choice, "보") == 0 && strcmp(rps[random], "가위") == 0)
		{
			puts("당신이 졌습니다.\n\n");

			break;
		}
		else
			puts("가위 바위 보만 입력할 수 있습니다.\n");
	}
	printf("게임의 결과 : %d승, %d무", win, draw);
	return 0;
}