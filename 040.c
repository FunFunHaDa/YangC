// 040 - float vs double -1

#include<stdio.h>

int main(void)
{
	int i;
	float sum = 0.0;

	puts("---------------------");
	puts(" float");
	puts("---------------------");

	for (i = 0; i < 100; i++)
	{
		sum = sum + 1.7f;
	}

	printf(" float sum = %f \n", sum);
	puts("---------------------");

	puts(" �Ҽ��� 2�ڸ������� ��� ");
	printf(" float sum = %.2f \n", sum);
	puts("---------------------");
	puts(" 168.999832 �̰��� CPU�� �Ѱ��̴�. ");
	puts(" �Ҽ��� 2�ڸ������� ����� ���� �ݿø��Ѵ�. ");
	puts("---------------------");

	return 0;
}