// 203 - 배열명이 함수의 인수로 전달될 때

// 정수배열이 함수의 인수로 전달

//#include<stdio.h>
//
//void Display(int x[5])
//{
//	int i; 
//	puts("\n ====> Display 함수");
//	printf(" x = %d \n", x);
//
//	for (i = 0; i < 5; i++)
//	{
//		printf(" x[%d] ==> %d 주소 ==> %d \n", i, x[i], &x[i]);
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
//	puts(" ==> main함수 출력");
//	for (i = 0; i < n; i++)
//	{
//		printf(" a[%d] ==> %d 주소 ==> %d \n", i, a[i], &a[i]);
//	}
//
//	Display(a);
//	return 0;
//}

// 정수 배열이 함수의 인수로 전달(착각, 배열이 통째로 복사되는거 아니다.)


//#include<stdio.h>
//
//// void Display(int x[])
//// void Display(int* x)
//
//void Display(int x[5])
//{
//	int i;
//	puts("\n =====> Display 함수");
//	printf(" x = %d byte \n", sizeof(x)); //  4바이트
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

// 정수배열이 함수의 인수로 전달 ( 배열의 개수를 알 수 없음)

//#include<stdio.h>
//void Display(int x[5])
//{
//	int i;
//	puts("\n ====> Display 함수");
//	printf(" x = %d byte \n", sizeof(x)); // 4바이트
//	puts(" 0 ~ 9 까지 10번 반복 ");
//
//	for (i = 0; i < 10; i++)
//	{
//		printf(" x[%d] ==> %d 주소 ==> %d \n", i, x[i], &x[i]);
//	}
//
//	puts("\n -2 ~ 5까지 8까지 반복");
//	for (i = -2; i < 6; i++)
//	{
//		printf(" x[%d] ==> %d 주소 ==> %d \n", i, x[i], &x[i]);
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

// 정수 배열이 함수의 인수로 전달 -- 최조열론

#include<stdio.h>
void Display(int x[5], int num)
{
	int i;
	puts("\n ====> Display 함수");

	for (i = 0; i < num; i++)
	{
		printf(" *(x+%d) ==> %d 주소 ==> %d\n", i, *(x + i), x + i);
	}

	puts(" 해결 - 배열의 개수도 함께 넘긴다. ");
}

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int n = sizeof(a) / sizeof(int);
	Display(a, n);
	return 0;
}