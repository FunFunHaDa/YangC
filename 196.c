// 196 - �޸𸮱��� �����ϱ�(stack, data, heap)

// �޸� �����ϱ�

#include<stdio.h>
#include<string.h>

int main()
{
	char a[10] = "africa"; // ���� ����
	char * k = "korea"; // data ����

	char * p = (char*)malloc(strlen("poland") + 1);
	strcpy(p, "poland"); // heap ����

	printf(" %s,  �ּ� a = %d \n", a, a);
	printf(" %s,  �ּ� &k = %d, �� = %d \n", k, &k, k);
	printf(" %s,  �ּ� &p = %d, �� = %d \n", p, &p, p);

	free(p);
	return 0;
}