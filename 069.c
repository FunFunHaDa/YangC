// 069 - 문자열 정렬

#include<stdio.h>	
#include<string.h>

int main()
{
	char city[5][10] = { "부 산", "대 구", "창 원", "목 포", "여 수" };
	char tmp[10];
	int i, j, n;
	n = sizeof(city) / sizeof(char[10]);

	puts("--------------------------");
	puts(" 문자열 정렬");
	puts("--------------------------");

	puts(" \n 원본 출력");
	for (i = 0; i < n; i++)
		printf(" city[%d] ==> %s \n", i, city[i]);

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

	puts(" 정렬후 출력");
	for (i = 0; i < n; i++)
		printf(" city[%d] ==> %s \n", i, city[i]);
	puts("--------------------------");
	puts(" strcmp은 문자열 비교함수, strcpy는 문자열 복사 ");
	puts("--------------------------");

}