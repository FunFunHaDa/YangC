// 245 - ���ڿ� �������� �Լ�ó��

// ���ڿ� ������

#include<stdio.h>

void func1(char x[])
{
	puts(" ���ڿ��� �迭�� ǥ��");
	printf(" x = %s \n", x);
	printf(" x = %d byte \n", sizeof(x));
	printf(" �Ѿ�� �ּ� = %d, �ڽ��� �ּ� &x = %d \n", x, &x);
}

void func2(char* x)
{
	puts(" ���ڿ��� �����ͽ� ǥ��");
	printf(" x = %s \n", x);
	printf(" x = %d byte \n", sizeof(x));
	printf(" �Ѿ�� �ּ� = %d, �ڽ��� �ּ� &x = %d \n", x, &x);
}

int main(void)
{
	char * a = "apple";

	puts("main�Լ�");
	printf(" a = %s, a = %d, &a = %d \n\n\n", a, a, &a);

	func1(a);
	func1("africa");

	puts("\n\n");

	func2(a);
	func2("africa");

	return 0;
}