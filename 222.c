// 222 - ����ó�� fopen�Լ�

// http://blog.naver.com/ahalinux/220791086052 [�̸� ������ ����]

// ���� �о���� fopen�Լ�

#include<stdio.h>

int main()
{
	char c = 0;

	FILE* fp = fopen("c:\\dd\\a.txt", "r");

	if (fp == NULL)
	{
		puts(" ���� ���� ����");
		return 1;
	}

	while (c != EOF) // EOF(end of file) ������ ���� �ƴ� ����
	{
		c = fgetc(fp);
		putchar(c);
	}

	fclose(fp);
	return 0;
}

