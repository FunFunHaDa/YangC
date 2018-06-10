// 160 - 문자열 찾기(strstr) 함수

#include<stdio.h>
#include<string.h>

int main(void)
{
	char st[] = "qwertyuiopasdfghjklzxcvbnm";

	printf(" 원 본 = %s \n\n", st);
	printf(" %s \n", strstr(st, "kl"));

	return 0;
}