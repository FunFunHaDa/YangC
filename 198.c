// 198 - 동적할당(malloc함수, calloc, free) - 힙(heap)영역

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, n;
	printf(" 처리할 데이터 수는 : ");
	scanf("%d", &n);

	int * p = (int*)malloc(sizeof(int)*n);
	if (p == NULL)
	{
		puts(" 동적할당실패!!!");
	}

	printf(" %d개의 정수 입력 \n\n", n);
	for (i = 0; i < n; i++)
	{
		printf(" [%d]번 째 정수 : ", i);
		scanf("%d", p + i);
	}

	printf(" \n %d의 정수 출력 \n", n);
	for (i = 0; i < n; i++)
	{
		printf(" [%d] ==> %d \n", i, *(p + i));
	}

	free(p);

	return 0;
}