// 175 - isspace함수 - 문자가 공백인지 확인

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char *s = "korea c program";

	while (*s != NULL)
	{
		printf(isspace(*s) ? "공백 \n" : "%c는 문자 \n", *s);
		s++;
	}
	return 0;
}
