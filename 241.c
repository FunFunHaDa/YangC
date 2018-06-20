// 241 - 최솟값 구하기 - 함수, 배열, 포인터 이해

// 최솟값(min) 구하기

#include<stdio.h>

int getMin(int *x, int number)
{
	int i, min;

	min = *x;
	for (i = 1; i < number; i++)
	{
		if (min > *(x + i))
		{
			min = *(x + i);
		}
	}
	return min;
}

int main(void)
{
	int a[10] = { 55, 35, 65, 75, 95, 15, 45, 25, 5, 85 };
	int i, n = sizeof(a) / sizeof(int);

	puts(" 원본 \n");
	for (i = 0; i < n; i++)
	{
		printf("%5d", a[i]);
	}

	puts("\n\n");
	printf("가장 작은 값은 : %d \n", getMin(a, n));
	return 0;
}

