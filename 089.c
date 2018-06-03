// 089 - 정수 정렬

#include<stdio.h>

int main()
{
	int ani[5] = { 7200, 4500, 8500, 3300, 2700 };
	int i, j, tmp;
	int n = sizeof(ani) / sizeof(int);

	puts("--------------------");
	puts(" 정수 정렬");
	puts("--------------------");

	puts(" 원 본 출 력");
	puts("--------------------");
	for (i = 0; i < n; i++)
		printf(" ani[%d] = %d \n", i, ani[i]);

	// 선택 정렬
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (ani[i] > ani[j])
			{
				tmp = ani[i];
				ani[i] = ani[j];
				ani[j] = tmp;
			}
		}
	}

	// 정렬후 출력 - 올림차순
	puts(" \n 올림차순 ");
	puts("--------------------");
	for (i = 0; i < n; i++)
		printf(" ani[%d] = %d \n", i, ani[i]);
	puts("--------------------");
	
	// 거품정렬(Bubble sort)
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (ani[j] < ani[j + 1])
			{
				tmp = ani[j];
				ani[j] = ani[j + 1];
				ani[j + 1] = tmp;
			}
		}
	}

	// 정렬후 출력 - 내림차순
	puts(" \n 내림차순");
	puts("--------------------");
	for (i = 0; i < n; i++)
		printf(" ani[%d] = %d \n", i, ani[i]);
	puts("--------------------");

	puts(" 비교의 방향에 따라 내림차순, 오름차순 변경");
	puts("--------------------");

}