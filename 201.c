// 201 - 포인터 크기(자료형 별로 확인)

#include<stdio.h>

int main()
{
	char ca = 'A';
	int ia = 50;
	double da = 3.14;
	char cp[] = "google";

	char * charP = &ca;
	int * intP = &ia;
	double * doubleP = &da;
	char * cpP = cp;

	printf(" char ca = 'A' ==> %d byte \n", sizeof(ca));
	printf(" int ia = 50 ==> %d byte \n", sizeof(ia));
	printf(" double da = 3.14 ==> %d byte \n", sizeof(da));
	printf(" char cp[] = \"google\" ==>  %d byte \n\n", sizeof(cp));

	printf(" char* charP ==> %d byte \n", sizeof(charP));
	printf(" int* intP ==> %d byte \n", sizeof(intP));
	printf(" double* doubleP ==> %d byte \n", sizeof(doubleP));
	printf(" char* cpP ==>  %d byte \n", sizeof(cpP));

	return 0;
}