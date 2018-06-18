// 230 - 매크로(macro)상수

// 매크로(macro) 상수

#include<stdio.h>
#define NUM 1000
#define P printf
#define PI 3.141592
#define NAME "책상"

int main()
{
	P(" NUM = %d\n", NUM);
	P(" NAME = %s\n", NAME);
	P(" PI = %lf \n", PI);	

	return 0;
}