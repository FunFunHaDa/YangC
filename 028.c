// 028 - ASCII CODE 보기

#include<stdio.h>

int main(void)
{
	int i;
	puts(" ASCII CODE 보기 ");
	for (i = 0; i < 128; i++)
	{
		printf("[%c = %d] \t\t", i, i);
	}

	return 0;
}