// 106 - 제어문과 연산자 - while문

#include<stdio.h>

int main()
{
	int i = 1, sum = 0;
	puts("-------------------");
	puts(" while문");
	puts("-------------------");

	while (i <= 10)
	{
		sum = sum + i;
		printf(" i=%2d, sum = %2d \n", i, sum);
		i = i + 1;
	}

	puts("-------------------");
	puts(" 변수선언시 i로 초기화 해줘야 합니다.");
	puts(" while문에 내부에 i의 값을 증가시킵니다.");
	puts("-------------------");

}