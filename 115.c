// 115 - ����� - 3

#include<stdio.h>

int main()
{
	int i, j;
	puts("--------------------");
	puts(" �� ��� -3");
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
	puts(" ���� �����ϴ� i");
	puts(" ���� �����Ѵ� j");
	puts("--------------------");

}