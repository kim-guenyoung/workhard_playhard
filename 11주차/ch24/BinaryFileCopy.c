/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	//바이너리 모드로 파일 개방
	FILE* src = fopen("src.bin", "rb");
	FILE* des = fopen("dst.bin", "wb");
	char buf[20];
	int readCnt;

	if (src == NULL || des == NULL)
	{
		puts("파일 오픈 실패");
		return -1;
	}
	while (1)
	{
		readCnt = fread((void*)buf, 1, sizeof(buf), src); //두 번째 전달인자가 1, 세 번째 전달인자가 sizeof(buf)이니 읽어들이는 데이터의 크기는 1 x sizeof(buf)바이트가 된다.
		if (readCnt < sizeof(buf)) //fread 함수가 sizeof(buf)의 반환 값보다 작은 값을 반환했을 때 참이 됨. 그런데 이는 오류가 발생했거나 파일의 끝에 도달한 상황이니
		//feof 함수의 호출을 통해 판단
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, readCnt, des); //파일의 끝에 도달하면 마지막으로 읽은 데이터를 파일에 저장하고 프로그램 종료
				puts("파일 복사 완료");
				break;
			}
			else
				puts("파일 복사 실패");

			break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
	}
	fclose(src);
	fclose(des);
	return 0;
}*/