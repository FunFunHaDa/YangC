// 085 - �迭���� ������ �ƴϴ�

#include<stdio.h>

int main()
{
	int i;
	int a[5] = { 100, 200, 300, 400, 500 };
	int n = sizeof(a) / sizeof(int);

	puts("--------------------------------");
	puts(" �迭���� ������ �ƴϴ�");
	puts("--------------------------------");

	// a = 777;
	a[0] = 777;

	puts("--------------------------------");

	for (i = 0; i < n; i++)
		printf(" a[%d] = %2d, &a[%d] = %d \n", i, a[i], i, &a[i]);
	puts("--------------------------------");

	puts(" �迭���� ������ �ƴϴ�.");
	puts(" �迭������ ���� ������ �� ���� ");
	puts("--------------------------------");
}