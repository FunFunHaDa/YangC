// 문자두개입출려문제 해결 fflush(stdin)

// 문자 여러개 입출력 3
#include<stdio.h>

int main(void)
{
	char a, b;
	puts("----------------------------");
	puts(" 두 문자 입출력");
	puts("----------------------------");

	printf(" 첫 번째 문자 입력 : ");
	scanf("%c", &a);

	printf(" 두 번째 문자 입력 : ");
	rewind(stdin);	// visual studio 2015
	// while (getchar() != '\n');
	scanf("%c", &b);

	printf(" a = %c , b = %c \n", a, b);
	puts("----------------------------");
	puts(" fflush(stdin)은 키보드 버퍼 비우기입니다.");
	puts("----------------------------");

	return 0;
}