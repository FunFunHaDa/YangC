// 197 - �޸� �����Ҵ� ��(heap)���� ����Ͽ� ���� �����ϱ�

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 10;
	int * p = (int *)malloc(sizeof(int));
	if (p == NULL)
	{
		puts(" �� �� �� �� �� �� !!!");
	}
	*p = 50;

	printf(" a = %d �ּ� &a = %d \n", a, &a);
	printf(" p = %d �ּ� &p = %d \n", p, &p);
	printf(" p�� ����Ű�� �� = %d", *p);
	free(p);

	return 0;
}