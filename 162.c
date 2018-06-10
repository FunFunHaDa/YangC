// 162 - 문자열을 토큰으로 분리 - strtok 함수

#include<stdio.h>
#include<string.h>

int main()
{
	char s[] = "My.Name is - FunFunHaDa";
	char * tok;

	printf(" s = %s \n", s);
	tok = strtok(s," ,.-");

	while (tok != NULL)
	{
		printf(" %s \n", tok);
		tok = strtok(NULL, " ,.-");
	}

	return 0;
}