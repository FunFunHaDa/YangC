// 239 - scanf�Լ� �� �� �Է��� ��

// scanf �Լ� ���� ���

#include<stdio.h>

int main(void)
{
	char  a, b;
	puts(" scanf �Լ� ���� Ȱ��\n ");

	printf(" �� ���� �Է� :");
	scanf("%c%c", &a, &b);
	//scanf("%c %c", &a, &b); // �߰��� ������ �߰�
	
	printf(" a = %c b = %c \n", a, b);

	return 0;
}

