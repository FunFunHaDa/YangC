// 188 - strtol�Լ� - ���ڹ��ڿ��� long������ ��ȯ�Ѵ�

#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf(" 16���� 1000 = 10���� = %d \n", strtol("1000", NULL, 16));
	printf(" 1000 = 10���� = %d \n", strtol("1000", NULL, 10));
	printf(" 8���� 1000 = 10���� = %d \n", strtol("1000", NULL, 8));
	printf(" 2���� 1000 = 10���� = %d \n", strtol("1000", NULL, 2));

}