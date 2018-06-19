// 239 - scanf함수 두 개 입력할 때

// scanf 함수 공백 사용

#include<stdio.h>

int main(void)
{
	char  a, b;
	puts(" scanf 함수 공백 활용\n ");

	printf(" 두 문자 입력 :");
	scanf("%c%c", &a, &b);
	//scanf("%c %c", &a, &b); // 중간에 공백을 추가
	
	printf(" a = %c b = %c \n", a, b);

	return 0;
}

