// 208_1 - 문자열 정렬 (배열과 포인터의 차이)

// 문자열 정렬(포인터)

#include<stdio.h>
#include<string.h>

int main()
{
	char * name[5] = { "양주종", "추신수", "박병호", "김현수", "오승환" };
	int i, j, n;
	char * tmp;
	n = sizeof(name) / sizeof(char*);

	puts("\n원본 출력");
	for (i = 0; i < n; i++)
	{
		printf(" [%d]번째 이름 ==> %s \n", i, name[i]);
	}

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(name[j], name[j + 1])> 0)
			{
				tmp = name[j];
				name[j] = name[j + 1];
				name[j + 1] = tmp;
			}
		}
	}
	puts("\n 정렬후 ");
	for (i = 0; i < n; i++)
	{
		printf("[%d]번째 이름 ==> %s \n", i, name[i]);
	}
	return 0;
}