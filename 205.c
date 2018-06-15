// 205 - 문자(char)배열의 개념 이해

#include<stdio.h>

int main()
{
	char a[] = "apple";
	char b[6] = { 'a', 'p', 'p', 'l', 'e', '\0' };
	int i;

	/*printf(" a = %d , b = %d \n", a, b);
	printf(" a = %s , b = %s \n", a, b);
	puts(a);
	puts(b);

	printf(" sizeof(a) = %d, sizeof(b) = %d\n", sizeof(a), sizeof(b));*/

	// 문자 배열의 저장 상태

	puts("배열");
	for (i = 0; i < 6; i++)
	{
		printf(" a[%d] = %c, 번지 = %d \n",i, a[i], &a[i]);
	}

	puts("\n b 배열");
	for (i = 0; i < 6; i++)
	{
		printf(" b[%d] = %c, 번지 = %d \n", i, b[i], &b[i]);
	}

	return 0;

	return 0;
}