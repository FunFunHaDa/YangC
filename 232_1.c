// 232_1 - ��ũ��(macro)�Լ�

// �Ϲ� �Լ�

#include<stdio.h>
int MAX(int x, int y)
{
	return x > y?x : y;
}

int MIN(int x, int y)
{
	return x < y ? x : y;
}


int main()
{
	printf(" %d, %d �� ū �� : %d \n", 10, 50, MAX(10, 50));
	printf(" %d, %d �� ������ : %d \n", 10, 50, MIN(10, 50));

}