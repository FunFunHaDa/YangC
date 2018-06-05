// 105 - 제어문과 연산자  - for문 변형

#include<stdio.h>

int main()
{
	int i, sum = 0;

	for (i = 1; i <= 100; i++)
	{
		sum = sum + i;
		printf(" i= %2d, sum = %2d \n", i, sum);
	}
	sum = 0;

	for (i = 1; i <= 100; i= i+2)
	{
		sum = sum + i;
		printf(" i= %2d, sum = %2d \n", i, sum);
	}
	sum = 0;

	for (i = 2; i <= 100; i= i+2)
	{
		sum = sum + i;
		printf(" i= %2d, sum = %2d \n", i, sum);
	}
	sum = 0;

	for (i = 10; i >=1; i--)
	{
		sum = sum + i;
		printf(" i= %2d, sum = %2d \n", i, sum);
	}
	
}