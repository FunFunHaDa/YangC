// 174 - isupper함수 - 문자가 대문자인지 확인

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	printf(isupper('a') ? "%c은 대문자 \n" : "%c은 대문자 아님 \n", 'a');
	printf(isupper('b') ? "%c은 대문자 \n" : "%c은 대문자 아님 \n", 'b');
	printf(isupper('F') ? "%c은 대문자 \n" : "%c은 대문자 아님 \n", 'F');
	printf(isupper('L') ? "%c은 대문자 \n" : "%c은 대문자 아님 \n", 'L');
	printf(isupper('$') ? "%c은 대문자 \n" : "%c은 대문자 아님 \n", '$');

}