// 203 - �迭���� �Լ��� �μ��� ���޵� ��

// �����迭�� �Լ��� �μ��� ����

//#include<stdio.h>
//
//void Display(int x[5])
//{
//	int i; 
//	puts("\n ====> Display �Լ�");
//	printf(" x = %d \n", x);
//
//	for (i = 0; i < 5; i++)
//	{
//		printf(" x[%d] ==> %d �ּ� ==> %d \n", i, x[i], &x[i]);
//	}
//}
//
//int main()
//{
//	int a[5] = { 10, 20, 30, 40, 50 };
//	int n = sizeof(a) / sizeof(int);
//	int i;
//	int * p = a;
//
//	printf(" a = %d, p = %d \n\n", a, p);
//	puts(" ==> main�Լ� ���");
//	for (i = 0; i < n; i++)
//	{
//		printf(" a[%d] ==> %d �ּ� ==> %d \n", i, a[i], &a[i]);
//	}
//
//	Display(a);
//	return 0;
//}

// ���� �迭�� �Լ��� �μ��� ����(����, �迭�� ��°�� ����Ǵ°� �ƴϴ�.)


//#include<stdio.h>
//
//// void Display(int x[])
//// void Display(int* x)
//
//void Display(int x[5])
//{
//	int i;
//	puts("\n =====> Display �Լ�");
//	printf(" x = %d byte \n", sizeof(x)); //  4����Ʈ
//}
//
//int main()
//{
//	int a[5] = { 10, 20, 30, 40, 50 };
//	int n = sizeof(a) / sizeof(int);
//	int * p = a;
//
//	printf(" int a[5], sizeof(a) ==> %d byte \n", sizeof(a));
//	printf(" int * p, sizeof(p) ==> %d byte \n", sizeof(p));
//
//	Display(a);
//	return 0;
//}

// �����迭�� �Լ��� �μ��� ���� ( �迭�� ������ �� �� ����)

//#include<stdio.h>
//void Display(int x[5])
//{
//	int i;
//	puts("\n ====> Display �Լ�");
//	printf(" x = %d byte \n", sizeof(x)); // 4����Ʈ
//	puts(" 0 ~ 9 ���� 10�� �ݺ� ");
//
//	for (i = 0; i < 10; i++)
//	{
//		printf(" x[%d] ==> %d �ּ� ==> %d \n", i, x[i], &x[i]);
//	}
//
//	puts("\n -2 ~ 5���� 8���� �ݺ�");
//	for (i = -2; i < 6; i++)
//	{
//		printf(" x[%d] ==> %d �ּ� ==> %d \n", i, x[i], &x[i]);
//	}
//}
//
//int main()
//{
//	int a[5] = { 10, 20, 30, 40, 50 };
//	int n = sizeof(a) / sizeof(int);
//	Display(a);
//	return 0;
//}

// ���� �迭�� �Լ��� �μ��� ���� -- ��������

#include<stdio.h>
void Display(int x[5], int num)
{
	int i;
	puts("\n ====> Display �Լ�");

	for (i = 0; i < num; i++)
	{
		printf(" *(x+%d) ==> %d �ּ� ==> %d\n", i, *(x + i), x + i);
	}

	puts(" �ذ� - �迭�� ������ �Բ� �ѱ��. ");
}

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int n = sizeof(a) / sizeof(int);
	Display(a, n);
	return 0;
}