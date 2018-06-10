// 161 - 문자열 비교(strcmp)함수

#include<stdio.h>
#include<string.h>

int main(void)
{
	printf(" AA : AA = %d \n\n", strcmp("AA", "AA"));
	printf(" AD : AA = %d \n\n", strcmp("AD", "AA"));
	printf(" AA : AD = %d \n\n", strcmp("AA", "AD"));

	return 0;
}