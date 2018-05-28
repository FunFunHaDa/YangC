// printf 문자출력

#include<stdio.h>

int main(void)
{
	puts("-----------------------");
	puts(" 문자 출력 ");
	puts("-----------------------");
	printf(" %c, %c, %c \n", 'A', 'B', '$');
	puts("-----------------------");

	printf("%%c는 character 형태로 출력하라 \n");
	puts("-----------------------");
	printf("putchar 함수는 문자전용 출력함수 \n");
	puts("-----------------------");
	printf("printf 함수는 여러 형식 출력함수 \n");
	puts("-----------------------");
	return 0;
}