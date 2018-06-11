// 177 - tolower함수 - 대문자를 소문자로 변환한다

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char * s = "APPLE GOOGLE SAMSUMG\n";

	while (*s != NULL)
	{
		printf(" %c", tolower(*s));
		s++;
	}
	return 0;
}