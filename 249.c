// 249 - main함수의 인수

#include<stdio.h>

int main(int x, char * y[])
{
	int i;
	printf(" main함수 인수의 개수 : %d 개 \n", x);

	for (i = 0; i < x; i++)
	{
		printf(" [%d]번째 인수 ==> %s \n", i, y[i]);
	}

	return 0;
}