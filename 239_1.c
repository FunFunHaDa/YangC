// 239_1 - scanf함수 두 개 입력할 때

// scanf 함수 공백 사용

#include<stdio.h>

int main(void)
{
	char  a, b = 'c';
	
	puts("scanf 함수 공백 활용 \n");
	printf(" 첫 번째 문자 입력 :");
	scanf("%c", &a);

	printf(" 두 번째 문장 입력 :");
	while (getchar() != '\n');
	scanf("%c", &b);

	printf("a = %c, b = %c \n", a, b);
	return 0;
}
