// 172 - isgraph함수 - 출력가능한 문자인지 판별

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	printf(isgraph('8') ? "%c은 그래픽문자 \n" : "%c은 그래픽문자 아님 \n", '8');
	printf(isgraph('$') ? "%c은 그래픽문자 \n" : "%c은 그래픽문자 아님 \n", '$');
	printf(isgraph('F') ? "%c은 그래픽문자 \n" : "%c은 그래픽문자 아님 \n", 'F');
	printf(isgraph('\n') ? "%c은 그래픽문자 \n" : "%c은 그래픽문자 아님 \n", '\\n');
	printf(isgraph('\0') ? "%c은 그래픽문자 \n" : "%c은 그래픽문자 아님 \n", '\\0');

}