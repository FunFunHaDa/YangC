// 185 - atol함수 - 문자열을 long형 정수로 변환한다

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("555555 = %d \n", atol("555555"));
	printf("33666 = %d \n", atol("33666"));
	printf("  123 = %d \n", atol("123"));
	printf("oracle = %d \n", atol("oracle "));

	return 0;
}