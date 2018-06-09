// 147 - Visual Studio2015에서 자료형의 크기 확인

#include<stdio.h>
#include<stdlib.h>

int main()
{
	puts(" VS2015에서 자료형의 크기 확인 \n");

	printf(" char = %d byte \n\n", sizeof(char));

	printf(" short = %d byte \n", sizeof(short));
	printf(" int = %d byte \n", sizeof(int));
	printf(" long = %d byte \n", sizeof(long));
	printf(" long long = %d byte \n\n", sizeof(long long));
	
	printf(" float = %d byte \n", sizeof(float));
	printf(" double = %d byte \n", sizeof(double));

	return 0;
}