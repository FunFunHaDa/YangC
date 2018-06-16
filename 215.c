// 215 - C언어 스택(stack)구조

// 스택	(STACK) 구조 확인

#include<stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	puts("번지수를 잘 보세요 ");
	printf(" a = %3d addr ==> %d \n", a, &a);
	printf(" b = %3d addr ==> %d \n", b, &b);
	printf(" c = %3d addr ==> %d \n", c, &c);

	return 0;

}