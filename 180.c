// 180 - ispunct�Լ� - ���ι������� �����Ѵ�
// ���ι��ڶ� *, &, ^, # ���� ����, ���� ������ ���ڵ�

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char * s = "A%^B#!C&~\t\n";

	while (*s != NULL)
	{
		printf(ispunct(*s) ? "%c�� ���ι��� \n" : "%c�� ���ι��� �ƴ� \n", *s);
		s++;
	}
	return 0;
}