// 214 - 아스키(ASCII)코드 보기

#include<stdio.h>

int main()
{
	int i;

	for (i = 0; i < 128; i++)
	{
		printf(" [%3d ==> %c] \n", i, i);
	}

	return 0;
}

// visual studio 2015 이제는 잘됩니다.