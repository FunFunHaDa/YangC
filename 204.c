// 204 - �����Ʈ(Bubble Sort) :: ���������� ���� ������

//#include<stdio.h>
//
//int main()
//{
//	int Pmoney[10] = { 30, 90, 20, 25, 50, 40, 80, 75, 35, 45 };
//	int n = sizeof(Pmoney) / sizeof(int);
//	int i, j, tmp;
//
//	puts(" �������");
//	for (i = 0; i < n; i++)
//	{
//		printf(" Pmoney[%d] ==> %d \n", i, Pmoney[i]);
//	}
//
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (Pmoney[j] > Pmoney[j + 1])
//			{
//				tmp = Pmoney[j];
//				Pmoney[j] = Pmoney[j + 1];
//				Pmoney[j + 1] = tmp;
//			}
//		}
//	}
//
//	puts("\n ������ ���");
//	for (i = 0; i < n; i++)
//	{
//		printf(" Pmoney[%d] ==> %3d���� \n", i, Pmoney[i]);
//	}
//
//	return 0;
//}
//

// �����Ʈ(Bubble Sort) - �Լ��� �и�
#include<stdio.h>

void Display(int * x, int _num, char* message)
{
	int i;
	puts(message);
	for (i = 0; i < _num; i++)
	{
		printf("[%d]��° �뵷 ==> �Ѵܿ� %d���� \n", i, *(x + i));
	}
}

void Bubblesort(int * x, int _num)
{
	int i, j, tmp;

	for (i = 0; i < _num; i++)
	{
		for (j = 0; j < _num - i - 1; j++)
		{
			if (*(x + j) > *(x + j + 1))
			{
				tmp = *(x + j);
				*(x + j) = *(x + j + 1);
				*(x + j + 1) = tmp;
			}
		}
	}
}

int main()
{
	int Pmoney[10] = { 30, 90, 20, 25, 50, 40, 80, 75, 35, 45 };
	int  n = sizeof(Pmoney) / sizeof(int);

	Display(Pmoney, n, "���� ���");
	Bubblesort(Pmoney, n);
	Display(Pmoney, n, "\n������ ���");
	return 0;
}