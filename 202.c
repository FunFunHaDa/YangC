// 202 - 배열과 포인터의 관계 이해

// 정수 배열과 포인터의 크기

//#include <stdio.h>
//
//int main()
//{
//	int a[5] = { 10, 20, 30, 40, 50 };
//	int * p = a;
//
//	printf(" int a[5], sizeof(a) ==> %d byte \n", sizeof(a));
//	printf(" int * p, sizeof(p) ==> %d byte \n", sizeof(p));
//
//	return 0;
//}

// 정수 배열과 포인터의 관계

//#include<stdio.h>
//
//int main()
//{
//	int a[5] = { 10, 20, 30, 40, 50 };
//	int n = sizeof(a) / sizeof(int);
//	int i;
//	int* p = a;
//
//	printf(" a = %d, p = %d \n\n", a, p);
//	for (i = 0; i < n; i++)
//	{
//		printf(" a[%d] ==> %d 주소 ==> %d \n", i, a[i], &a[i]);
//	}
//
//	return 0; 
//}


// 정수 배열과 포인터의 관계

#include<stdio.h>

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int n = sizeof(a) / sizeof(int);
	int i;
	int * p = a;

	printf(" a = %d, p = %d \n\n", a, p);

	for (i = 0; i < n; i++)
	{
		printf(" p[%d] ==> %d 주소 ==> %d \n", i, p[i], &p[i]);
		printf(" *(a+%d) ==> %d 주소 ==> %d \n", i, *(a + i), a + i);
		printf("*(p+%d) ==> %d 주소 ==> %d \n", i, *(p + i), p + i);
	}

	return 0;
}