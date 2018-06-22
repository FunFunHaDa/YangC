// 258 - 함수 호출 방식(call by reference)참조에 의한 호출

// 함수 호출 방식 (call by reference)

#include<stdio.h>

void swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
	printf("\n swap함수 x = %d, y = %d \n", x, y);
	printf(" &x = %d, &y = %d \n", &x, &y);
}

int main(void)
{
	int a = 20, b = 30;

	puts(" \n 함수호출방식(call by reference) \n");
	printf(" 원래값 a = %d, b = %d \n", a, b);
	printf(" &a = %d, &b = %d \n", &a, &b);

	swap(a, b);

	printf(" \n swap함수호출후 a = %d, b = %d \n", a, b);
	return 0;
}