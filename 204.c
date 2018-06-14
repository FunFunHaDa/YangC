// 204 - 버블소트(Bubble Sort) :: 선택정렬이 가장 쉬워요

//#include<stdio.h>
//
//int main()
//{
//	int Pmoney[10] = { 30, 90, 20, 25, 50, 40, 80, 75, 35, 45 };
//	int n = sizeof(Pmoney) / sizeof(int);
//	int i, j, tmp;
//
//	puts(" 원본출력");
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
//	puts("\n 정렬후 출력");
//	for (i = 0; i < n; i++)
//	{
//		printf(" Pmoney[%d] ==> %3d만원 \n", i, Pmoney[i]);
//	}
//
//	return 0;
//}
//

// 버블소트(Bubble Sort) - 함수로 분리
#include<stdio.h>

void Display(int * x, int _num, char* message)
{
	int i;
	puts(message);
	for (i = 0; i < _num; i++)
	{
		printf("[%d]번째 용돈 ==> 한단에 %d만원 \n", i, *(x + i));
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

	Display(Pmoney, n, "원본 출력");
	Bubblesort(Pmoney, n);
	Display(Pmoney, n, "\n정렬후 출력");
	return 0;
}