// 225 - time 함수

#include<stdio.h>

int main()
{
	time_t t;
	//	time(&t);

	t = time(NULL);
	printf(" 1970년 1월 1일 자정부터 흘러온 시간 : %u초 \n", t);
	return 0;
}