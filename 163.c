// 163 - 문자열에서 임의의 문자 위치 찾기 - strchr함수

#include<stdio.h>
#include<string.h>

int main()
{
	char s[] = "My Name is Yang Ju Jong";
	printf(" 원 본 = %s \n\n", s);
	printf(" Y를 찾 고 = %s \n", strchr(s, 'Y'));
	return 0;
}