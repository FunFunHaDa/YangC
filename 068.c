// 068 - ���ڿ� �迭�� �����

#include<stdio.h>
#include<string.h>

int main()
{
	char city[5][10];
	int i, n;
	n = sizeof(city) / sizeof(char[10]);

	puts("------------------------");
	puts(" ���ڹ迭�� �����");
	puts("------------------------");

	printf(" ��� ���� ���� [%d] �� �Է� \n", n);
	for (i = 0; i < n; i++)
	{
		printf("[%d]��° ���� : ", i);
		gets(city[i]);
	}
	puts("------------------------");

	puts(" ���");
	for (i = 0; i < n; i++)
		printf(" city[%d] ==> %s \n", i, city[i]);

	puts(" char[10]�� 5�� ���� 2���� �迭�Դϴ�.");

}