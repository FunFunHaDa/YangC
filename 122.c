// 122 - C��� break��

#include<stdio.h>

int main()
{
	int i;

	puts("-----------------------");
	puts(" break��");
	puts("-----------------------");

	for (i = 0; i < 10; i++)
	{
		if (i == 5)
			break;
		printf(" C���� ��մ�. : %d \n", i);
	}

	puts("-----------------------");
	puts(" ������ ���� �Ǹ� �ǳʶڴ�. skip");
	puts(" continue���� ���Ͽ� ��������. ");
	puts("-----------------------");

}