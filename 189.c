// 189 - strtod함수 - 문자열을 실수로 변환한다

#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf(" 555.5555555 그냥출력 = %lf \n", strtod("555.5555555", NULL, 10));
	printf(" 555.5555555 그냥출력 = %f \n", strtod("555.5555555", NULL, 10));
	printf(" 555.5555555 .3출력 = %.3lf \n", strtod("555.5555555", NULL, 10));
	printf(" 555.5555555 .1출력 = %.1lf \n", strtod("555.5555555", NULL, 10));

}