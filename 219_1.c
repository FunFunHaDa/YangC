// 219_1 - getchar�Լ� VS fgetc�Լ�

// fgetc �Լ�

#include<stdio.h>

int main()
{
	char b_type;
	fprintf(stdout, " ����� �������� : ");
	b_type = fgetc(stdin);

	fprintf(stdout, "\n%c���̱���. �ݰ����ϴ�. \n", b_type);
	fputs(" ���ο� �Է��Լ� fgetc \n", stdout);

	return 0;
}