// 245 - 문자열 포인터의 함수처리

// 문자열 포인터

#include<stdio.h>

void func1(char x[])
{
	puts(" 문자열의 배열식 표현");
	printf(" x = %s \n", x);
	printf(" x = %d byte \n", sizeof(x));
	printf(" 넘어온 주소 = %d, 자신의 주소 &x = %d \n", x, &x);
}

void func2(char* x)
{
	puts(" 문자열의 포인터식 표현");
	printf(" x = %s \n", x);
	printf(" x = %d byte \n", sizeof(x));
	printf(" 넘어온 주소 = %d, 자신의 주소 &x = %d \n", x, &x);
}

int main(void)
{
	char * a = "apple";

	puts("main함수");
	printf(" a = %s, a = %d, &a = %d \n\n\n", a, a, &a);

	func1(a);
	func1("africa");

	puts("\n\n");

	func2(a);
	func2("africa");

	return 0;
}
