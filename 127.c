// 127 - C���� ���� ���� ����

#include<stdio.h>

int main()
{
	int num1, num2;
	char op;

	puts("-------------------------");
	puts(" ���ܰ���");
	puts("-------------------------");


	printf(" ù��° �� : ");
	scanf("%d", &num1);
	

	printf(" [+, - , *, /] :");
	while (getchar() != '\n');
	op = getchar();
	
	

	printf(" �ι�° �� : ");
	scanf("%d", &num2);

	if (op == '+')
		printf(" %d + %d = %d \n", num1, num2, num1 + num2);
	else if (op == '-')
		printf(" %d - %d = %d \n", num1, num2, num1 - num2);
	else if (op == '*')
		printf(" %d * %d = %d \n", num1, num2, num1 * num2);
	else if (op == '/')
		printf(" %d / %d = %d \n", num1, num2, num1 / num2);
	else
		printf(" %c �׷� �����ڴ� �����ϴ�. \a\a", op);

	puts("-------------------------------");
	puts(" õõ�� �ݺ��Ͽ� �ǽ��� ������. ");
	puts(" �������� ������� �����Ͽ� ������");
	printf(" %d * %d = %d \n", num1, num2, num1 * num2);





}