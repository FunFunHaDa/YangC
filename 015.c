/ ���� ����� (scanf, getchar)

#include<stdio.h>

int main(void)
{
	char btype;
	puts("-----------------------------");
	puts(" ���� ����� ");
	puts("-----------------------------");

	printf(" �������� �Է��ϼ��� : ");
	scanf("%c", &btype);

	printf(" ����� �������� %c���Դϴ�. \n", btype);
	puts("-----------------------------");
	puts("���� �Է��� scnanf(%c), getchar �ΰ��� ����� �ֽ��ϴ�.");
}