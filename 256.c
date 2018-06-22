// 256 - 값에 의한 호출(call by value)

#include<stdio.h>

int swap(int x, int y)
{
	int t;
	t = x;
	x = y;
	y = t;

	printf("\n swap함수 x = %d, y = %d \n\n", x, y);
	return 0;
}

int main()
{
	int a = 5, b = 7; 
	puts(" \n값에 의한 호출(call by value) \n");
	printf(" \n 원 본 값 a = %d, b = %d \n", a, b);
	swap(a, b);
	printf(" \n 호 출 후 a = %d, b = %d \n", a, b);
	return 0;
}