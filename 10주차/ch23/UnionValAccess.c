#/*
include <stdio.h>
typedef union ubox //공용체 ubox의 정의
{
	int mem1;
	int mem2;
	double mem3;
}UBox;

int main(void)
{
	UBox ubx;
	ubx.mem2 = 20;
	printf("%d\n", ubx.mem2); //20
	printf("%d\n", ubx.mem1); //20
	printf("%d\n", ubx.mem3); //20
	//12행에서 ubx.mem1에 20이라는 값을 저장하였으므로, 20이 출력
	ubx.mem3 = 7.15; //실수를 저장하면서 앞에 있는 값을 모두 덮어버렸기 때문에
	
	printf("%d\n", ubx.mem1);
	printf("%d\n", ubx.mem2);
	printf("%g\n", ubx.mem3);

	return 0;
}*/