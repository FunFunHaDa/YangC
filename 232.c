// 232 - 매크로(macro)함수

// 매크로 함수

#include<stdio.h>

#define MAX(a, b) a>b ? a:b
#define MIN(a, b) a<b ? a:b
#define P printf

int main()
{
	P(" %d, %d 중 큰 값 : %d \n", 10, 50, MAX(10, 50));
	P(" %d, %d 중 작은값 : %d \n", 10, 50, MIN(10, 50));

}