// 205 - ����(char)�迭�� ���� ����

#include<stdio.h>

int main()
{
	char a[] = "apple";
	char b[6] = { 'a', 'p', 'p', 'l', 'e', '\0' };
	int i;

	/*printf(" a = %d , b = %d \n", a, b);
	printf(" a = %s , b = %s \n", a, b);
	puts(a);
	puts(b);

	printf(" sizeof(a) = %d, sizeof(b) = %d\n", sizeof(a), sizeof(b));*/

	// ���� �迭�� ���� ����

	puts("�迭");
	for (i = 0; i < 6; i++)
	{
		printf(" a[%d] = %c, ���� = %d \n",i, a[i], &a[i]);
	}

	puts("\n b �迭");
	for (i = 0; i < 6; i++)
	{
		printf(" b[%d] = %c, ���� = %d \n", i, b[i], &b[i]);
	}

	return 0;

	return 0;
}