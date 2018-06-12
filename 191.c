// 191 - memset함수 - 메모리를 특정값으로 채운다.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char a[20];
	int * s = a;
	memset(a, 'T', 19);
	a[9] = '\0';
	printf(" a = %s \n", a);

	return 0;
}