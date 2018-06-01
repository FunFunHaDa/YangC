// 064 - 정수 정렬(거품 정렬)
#include<stdio.h>

int main()
{
	int a[] = { 65, 25, 45, 35, 55 };
	int i, j, tmp, n;
	n = sizeof(a) / sizeof(int);

	puts("------------------");
	puts("정수 정렬");
	puts("------------------");

	puts(" 원본 출력");
	for (i = 0; i < n; i++)
		printf(" a[%d] = %d \n", i, a[i]);

	// 거품 정렬
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}

	puts("\n 정렬후 출력");
	for (i = 0; i < n; i++)
		printf(" a[%d] = %d \n", i, a[i]);
	puts("------------------");

	puts(" 뜻을 이해하려고 하지 말고 결과만 확인하세요 ");
	puts("------------------");

}