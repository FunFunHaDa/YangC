// 223 - ������� (fopen�Լ�, fputs�Լ�)

// ���Ͽ� ����ϱ� fopen�Լ�

#include<stdio.h>

int main() {
	FILE * fp = fopen("c:\\dd\\b.txt", "w");

	if (fp == NULL)
	{
		puts("���� ���� ����");
		return 1;
	}

	fputs(" ��ſ� �ݿ����̴�. \n", stdout);
	fputs(" 2016�� ������ �߰ſ���. \n", stdout);

	fputs(" ��ſ� �ݿ����̴�. \n", fp);
	fputs(" 2016�� ������ �߰ſ���. \n", fp);

	fclose(fp);

	return 0;
}