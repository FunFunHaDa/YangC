// 158 - 문자열복사(strcpy)함수 - 문자열의 맞교환

#include<stdio.h>
#include<string.h>

int main(void)
{
	char k[6] = "korea";
	char j[6] = "japan";
	char tmp[6];

	printf(" 원 래 값 k = %s, j = %s \n\n", k, j);

	strcpy(tmp, k);
	strcpy(k, j);
	strcpy(j, tmp);

	printf(" 변 경 후 k = %s, j = %s \n", k, j);

	return 0;
}