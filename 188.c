// 188 - strtol함수 - 숫자문자열을 long형으로 변환한다

#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf(" 16진수 1000 = 10진수 = %d \n", strtol("1000", NULL, 16));
	printf(" 1000 = 10진수 = %d \n", strtol("1000", NULL, 10));
	printf(" 8진수 1000 = 10진수 = %d \n", strtol("1000", NULL, 8));
	printf(" 2진수 1000 = 10진수 = %d \n", strtol("1000", NULL, 2));

}