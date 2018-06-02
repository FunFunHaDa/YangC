// 070 - 문자열 정렬 고급

#include<stdio.h>
#include<string.h>

int main()
{
	char city[5][10];
	char tmp[10];
	int i, j, n;
	n = sizeof(city) / sizeof(char[10]);

	puts("------------------");
	puts(" 문자열 정렬");
	puts("------------------");

	printf(" 살고 싶은 도시 [%d] 곳 입력 \n", n);
	for (i = 0; i < n; i++)
	{
		printf(" [%d]번째 도시 : ", i);
		gets(city[i]);
	}
	puts("------------------");

	puts(" \n 원본 출력");
	for (i = 0; i < n; i++)
		printf(" city[%d] ==> %s \n", i, city[i]);
	puts("------------------");

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(city[i], city[j]) > 0)
			{
				strcpy(tmp, city[i]);
				strcpy(city[i], city[j]);
				strcpy(city[j], tmp);
			}
		}
	}
	puts("------------------");
	puts(" 정렬후 출력");
	for (i = 0; i < n; i++)
		printf(" city[%d] ==> %s \n", i, city[i]);
	puts("------------------");
	puts(" 원본출력이 안되면 점검하고 넘어가지 마세요");
	puts("------------------");

}