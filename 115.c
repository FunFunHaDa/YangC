// 115 - 별찍기 - 3

#include<stdio.h>

int main()
{
	int i, j;
	puts("--------------------");
	puts(" 별 찍기 -3");
	puts("--------------------");

	for (i = 5; i > 0; i--)
	{
		for (j = 5; j > i - 1; j--)
		{
			printf(" * ");
		}
		putchar('\n');
	}

	puts("--------------------");
	puts(" 행을 제어하는 i");
	puts(" 열을 제어한는 j");
	puts("--------------------");

}