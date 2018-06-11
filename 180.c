// 180 - ispunct함수 - 구두문자인지 구분한다
// 구두문자란 *, &, ^, # 등을 숫자, 문자 제외한 문자들

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char * s = "A%^B#!C&~\t\n";

	while (*s != NULL)
	{
		printf(ispunct(*s) ? "%c는 구두문자 \n" : "%c는 구두문자 아님 \n", *s);
		s++;
	}
	return 0;
}