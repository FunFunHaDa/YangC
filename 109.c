// 109 - 조건이 처음부터 거짓일 경우 for문

#include<stdio.h>

int main()
{
	int i, sum = 0;
	puts("-----------------------------------");
	puts(" 조건이 처음부터 거짓일 경우 for문");
	puts("-----------------------------------");

	for (i = 100; i <= 10 ;i++)
	{
		sum = sum + i;
		printf(" i = %2d, sum = %2d \n", i, sum);
	}

	puts("-----------------------------------");
	puts(" for문 한번도 수행되지 않는다");
	puts(" 블럭을 그냥 빠져 나간다");
	puts("-----------------------------------");

}