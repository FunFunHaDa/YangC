// 212 - 문자열 리터럴(literal)

#include<stdio.h>
#include<string.h>

int main()
{
	char a[] = "Africa";

	printf(" a = %s \n", a);

	strcpy(a, "April");
	printf(" a = %s \n", a);

	printf(" 문자열 = %s \n", "America");

	// "America" = "Ace";

	return 0;
}