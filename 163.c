// 163 - ���ڿ����� ������ ���� ��ġ ã�� - strchr�Լ�

#include<stdio.h>
#include<string.h>

int main()
{
	char s[] = "My Name is Yang Ju Jong";
	printf(" �� �� = %s \n\n", s);
	printf(" Y�� ã �� = %s \n", strchr(s, 'Y'));
	return 0;
}