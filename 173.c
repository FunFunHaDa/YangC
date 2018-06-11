// 173 - islower함수 - 문자가 소문자인지 확인

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	printf(islower('a') ? "%c은 소문자 \n" : "%c은 소문자 아님 \n", 'a');
	printf(islower('b') ? "%c은 소문자 \n" : "%c은 소문자 아님 \n", 'b');
	printf(islower('F') ? "%c은 소문자 \n" : "%c은 소문자 아님 \n", 'F');
	printf(islower('L') ? "%c은 소문자 \n" : "%c은 소문자 아님 \n", 'L');
	printf(islower('$') ? "%c은 소문자 \n" : "%c은 소문자 아님 \n", '$');

}