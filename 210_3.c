// 210_3 - 배열포인터와 포인터배열

// 포인터 배열 

#include<stdio.h>
#include<string.h>

int main()
{
	char * title = NULL;
	char * name[5];

	char * titleP = title;
	char ** nameP = name;	// 포인터 배열

	printf(" title = %d byte \n", sizeof(title));
	printf(" name = %d byte \n", sizeof(name));

	printf(" titleP = %d byte \n", sizeof(titleP));
	printf(" nameP = %d byte \n", sizeof(nameP));
	return 0;
}