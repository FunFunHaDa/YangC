// 183 - atoi함수 - 문자열을 정수로 변환한다
// 정수로 된 문자열을 반환
// 정상이면 정수
// 비정상이면 0을 리턴

#include<stdio.h>
#include<string.h>

int main(void)
{
	printf(" 555 = %d \n", atoi("555"));
	printf(" 345 = %d \n", atoi("346"));
	printf(" ace = %d \n", atoi("ace"));

	return 0;
}