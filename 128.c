// 128 - ���� ����(switch ~ case��)
#include<stdio.h>

int main()
{
	int num1, num2;
	char op;

	puts("----------------");
	puts(" ���ܰ���");
	puts("----------------");

	printf(" ù��° �� : ");
	scanf("%d", &num1);

	printf(" [+, -, *, / ] : ");
	while (getchar() != '\n');
	op = getchar();

	printf(" �ι�° �� : ");
	scanf("%d", &num2);

	switch (op)
	{
	case '+':
		printf(" %d + %d = %d \n", num1, num2, num1 + num2);
		break;
	case '-':
		printf(" %d - %d = %d \n", num1, num2, num1 - num2);
		break;
	case '*':
		printf(" %d * %d = %d \n", num1, num2, num1 * num2);
		break;
	case '/':
		printf(" %d / %d = %d \n", num1, num2, num1 / num2);
		break;
	default:
		printf(" %c �׷� �����ڴ� �����ϴ�. \a\a ", op);
	}

	puts("--------------------------");
	puts(" ���� if���� ���Ͽ� ����");
	puts(" � ������ �� ���ڴ��� ������ ������");
	puts("--------------------------");

}