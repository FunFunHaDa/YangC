// 210_2 - 배열포인터와 포인터배열

// 배열 포인터

#include<stdio.h>
#include<string.h>

int main()
{
	char title[20];
	char name[5][20];

	char * titleP = title;
	char(*nameP)[20] = name; // 배열 포인터

	printf(" title = %d byte \n", sizeof(title));
	printf(" name = %d byte \n", sizeof(name));

	printf(" titleP = %d byte \n", sizeof(titleP));
	printf(" nameP = %d byte \n", sizeof(nameP));

	return 0;
}