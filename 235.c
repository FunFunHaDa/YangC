// 235 - 정수 배열의 초기화

#include<stdio.h>

int main()
{
	int a[5];
	int b[5] = { 0, };
	int c[5] = { 0 };
	int i;

	puts(" 배열a[5]결과 ");
	for (i = 0; i < 5; i++)
		printf(" a[%d] = %d \n", i, a[i]);

	puts("\n 배열 b[5] = {0, } 결과");
	for (i = 0; i < 5; i++)
		printf(" b[%d] = %d \n", i, b[i]);

	puts("\n 배열 c[5] = {0} 결과");
	for(i=0; i<5; i++)
		printf(" c[%d] = %d \n", i, c[i]);

	return 0;
}