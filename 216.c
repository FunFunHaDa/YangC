// 216 - 재귀함수(recursive call) - 스택(stack)의 이해

#include<stdio.h>

void func(int x)
{
	printf(" func함수 x = %3d addr ==> %d \n", x, &x);
}

int func2(int x)
{
	if (x == 0)
		return;

		func2(x - 1);
		puts("\n func2 함수");
		printf(" func함수 x  = %3d addr ==> %d \n", x, &x);
}

int main()
{
	int a = 10;
	int b = 20; 
	int c = 30;

	puts(" 번지수를 잘 보세요 ");

	func(100);
	func(200);
	func(300);

	func2(3);
	return 0;
}