// 207_1 - 문자열 맞교환(배열과 포인터의 차이)

// 문자열 대입, 맞교환

#include<stdio.h>

int main(void)
{
	char * a = "추신수";
	char * b = "김현수";
	char * t;

	printf(" 원 본 a = %s, b = %s \n", a, b);

	t = a;
	a = b;
	b = t;

	printf(" 교환후 a = %s, b = %s \n", a, b);
	return 0;
}