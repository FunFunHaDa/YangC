// 232 - ��ũ��(macro)�Լ�

// ��ũ�� �Լ�

#include<stdio.h>

#define MAX(a, b) a>b ? a:b
#define MIN(a, b) a<b ? a:b
#define P printf

int main()
{
	P(" %d, %d �� ū �� : %d \n", 10, 50, MAX(10, 50));
	P(" %d, %d �� ������ : %d \n", 10, 50, MIN(10, 50));

}