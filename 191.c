// 191 - memset�Լ� - �޸𸮸� Ư�������� ä���.

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