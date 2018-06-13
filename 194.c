// 194 - 기억류(storage class) - static 변수

// static

#include<stdio.h>
int gg;

int main()
{
	int a;
	static int b;

	printf(" a = %d, &a = %d \n", a, &a);
	printf(" b = %d, &b = %d \n", b, &b);
	printf(" gg = %d, &gg = %d \n", gg, &gg);

	puts(" a는 stack영역, b, gg, data영역에 할당된다. ");
	puts(" 초기화 하지 않으면 a는 쓰레기값, b, gg는 0");

	return 0;

}