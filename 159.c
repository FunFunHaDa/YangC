// 159 - 문자열연결(strcat) 함수

#include<stdio.h>
#include<string.h>

int main(void)
{
	char c[20] = "cpp";

	printf(" cpp = %s \n\n", c);
	strcat(c, "programming");
	printf(" cpp = %s \n\n", c);
	return 0;
}