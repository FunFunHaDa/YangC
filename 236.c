// 236 - 정수 2차원 배열의 초기화

#include<stdio.h>

int main()
{
	int a[2][3] = { 0 };
	int aa[2][3];
	int b[][3] = { 1, 2,3,4,5, 6 };
	// int c[2][] ={1, 2, 3, 4, 5, 6};
	int i, j;
	
	puts("배열 a 결과");
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			printf(" a[%d][%d] = %d \n", i, j, a[i][j]);

	puts("\n 배열 aa 결과");
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			printf(" aa[%d][%d] = %d \n", i, j, aa[i][j]);

	puts("\n 배열 b 결과");
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			printf(" b[%d][%d] = %d \n", i, j, b[i][j]);

	return 0;



}
