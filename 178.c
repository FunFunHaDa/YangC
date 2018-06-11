// 178 - __toascii함수 - 문자를 아스키코드값을 반환한다.

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char * s = "ABCDE abcde";

	while (*s != NULL)
	{
		printf(" %c ==> %d \n", *s, __toascii(*s));
		s++;
	}

	return 0;
}