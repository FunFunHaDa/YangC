// 028 - ASCII CODE ����

#include<stdio.h>

int main(void)
{
	int i;
	puts(" ASCII CODE ���� ");
	for (i = 0; i < 128; i++)
	{
		printf("[%c = %d] \t\t", i, i);
	}

	return 0;
}