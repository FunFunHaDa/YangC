// 210_1 - 배열포인터와 포인터배열

// 2차원 배열과 포인터

#include<stdio.h>
#include<string.h>

int main()
{
	char a[5][10];
	int b[4][5];
	double d[8][4];

	char(*ap)[10] = a;
	int(*bp)[5] = b;
	double(*dp)[4] = d;

	return 0;
}