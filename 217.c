// 217 - putchar함수 VS fputc함수

#include<stdio.h>

int main()
{
	putchar('A');
	putchar('B');
	putchar('C');
	putchar('\n');

	fputc('A', stdout);
	fputc('B', stdout);
	fputc('C', stdout);

	putchar(97);
	putchar(98);
	putchar(99);

	putchar('\n');

	fputc(97, stdout);
	fputc(98, stdout);
	fputc(99, stdout);

	putchar('\n');

	puts(" stdout은 표준출력을 의미합니다. \n");
	puts(" standard output 모니터를 나타내요 \n");
	puts(" 어느곳에 출력할 지를 지정해줘야 하지요 \n");
	puts(" 정수와 문자가 같다는 것 복습했어요 \n");
}