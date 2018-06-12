// 182 - isprint함수 - 프린트 가능문자인지 판별

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char * s = "ABab\n\t";

	while (*s != NULL)
	{
		printf(isprint(*s) ? "%c는 프린트가능 \n" : "%c는 프린트 불가능 \n", *s);
		s++;
	}
	return 0;
}