// 207 - 문자열 맞교환(배열과 포인터의 차이)

// 문자열 대입, 맞교환

#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[10] = "추신수";
	char b[10] = "김현수";
	char t[10];

	printf(" 원 본 a = %s, b = %s \n", a, b);

	strcpy(t, a);
	strcpy(a, b);
	strcpy(b, t);
	
	printf(" 교환후 a = %s, b = %s \n", a, b);
	return 0; 
}


