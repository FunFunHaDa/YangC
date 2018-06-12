// 184 - atof함수 - 문자열을 실수로 변환한다
// 정상이면 실수 비정상이면 0.0을 리턴

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf(" 555.555 = %.2f \n", atof("555.555"));
	printf(" 33.666 = %.2f \n", atof("33.666"));
	printf(" 123.123 = %.2f \n", atof("123.123"));
	printf(" abc = %.2f \n", atof("abc"));
	return 0;
}