// 209 - 문자열 정렬::버블소트(bubble sorting)알고리즘

// 문자열 정렬(포인터) - 함수로 처리

#include<stdio.h>
#include<string.h>

void DisplayName(char **x, int _num, char * message)
{
	int i;
	puts(message);
	for (i = 0; i < _num; i++)
	{
		printf("[%d]번째 이름 ==> %s \n", i, *(x + i));
	}
}

void BubbleSort(char ** x, int _num)
{
	int i, j;
	char * tmp;

	for (i = 0; i < _num - 1; i++)
	{
		for (j = 0; j < _num - 1 - i; j++)
		{
			if (strcmp(*(x + j), *(x + j + 1)) > 0)
			{
				tmp = *(x + j);
				*(x + j) = *(x + j + 1);
				*(x + j + 1) = tmp;

			}
		}
	}
	DisplayName(x, _num, "\n 정렬 후");
}


int main()
{
	char * name[5] = { "양주종", "송중기", "남궁민", "김래원", "강동원" };
	int n = sizeof(name) / sizeof(char*);

	DisplayName(name, n, "원본출력");
	BubbleSort(name, n);
	return 0;
}