// 194-1 - 기억류(storage class) -static 변수 

// 기억류(storage class) static

#include<stdio.h>

void sub(int x)
{
	int ak = 100;
	static int sk = 200;
	printf(" sub함수 x = %d, &x = %d \n", x, &x);
	printf(" sub함수 ax = %d, &x = %d \n", ak, &ak);
	printf(" sub함수 sx = %d, &x = %d \n", sk, &sk);
}

int main()
{
	int a;
	static int b;

	printf(" a = %d, &a = %d \n", a, &a);
	printf(" b = %d, &b = %d \n", b, &b);

	sub(500);
	return 0;
}