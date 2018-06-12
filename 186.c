// 186 - itoa함수 - 정수를 진수별 문자열을 변환한다

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char a8[10], a16[10], a2[10], a10[10];
	
	printf(" 100을 8진수로 = %10s \n", itoa(100, a8, 8));
	printf(" 100을 16진수로 = %10s \n", itoa(100, a16, 16));
	printf(" 100을 10진수로 = %10s \n", itoa(100, a10, 10));
	printf(" 100을 2진수로 = %10s \n", itoa(100, a2, 2));
	
}