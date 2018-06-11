// 176 - tooupper함수 - 소문자를 대문자로 변환한다

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char * s = "linux programming\n";

	while (*s != NULL)
	{
		printf("%c", toupper(*s));
		s++;
	}
	return 0;
}