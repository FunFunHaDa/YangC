// ���ڵΰ���������� �ذ� fflush(stdin)

// ���� ������ ����� 3
#include<stdio.h>

int main(void)
{
	char a, b;
	puts("----------------------------");
	puts(" �� ���� �����");
	puts("----------------------------");

	printf(" ù ��° ���� �Է� : ");
	scanf("%c", &a);

	printf(" �� ��° ���� �Է� : ");
	rewind(stdin);	// visual studio 2015
	// while (getchar() != '\n');
	scanf("%c", &b);

	printf(" a = %c , b = %c \n", a, b);
	puts("----------------------------");
	puts(" fflush(stdin)�� Ű���� ���� �����Դϴ�.");
	puts("----------------------------");

	return 0;
}