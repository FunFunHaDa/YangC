// 231 - const상수와 macro 상수

#include<stdio.h>
#define MAX 10
#define P printf

int main()
{
	const int num = 5;
	int i;

	for (i = 0; i < MAX; i++)
	{
		P("i = %d, 프로그래밍은 재밌다 \n", i);
	}

	putchar('\n');
	for (i = 0; i < num; i++)
	{
		P(" i = %d, 프로그래밍은 재밌다(?) \n", i);
	}
	return 0;
}