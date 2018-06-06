// 122 - C언어 break문

#include<stdio.h>

int main()
{
	int i;

	puts("-----------------------");
	puts(" break문");
	puts("-----------------------");

	for (i = 0; i < 10; i++)
	{
		if (i == 5)
			break;
		printf(" C언어는 재밌다. : %d \n", i);
	}

	puts("-----------------------");
	puts(" 조건이 참이 되면 건너뛴다. skip");
	puts(" continue문과 비교하여 이해하자. ");
	puts("-----------------------");

}