// 232_1 - 매크로(macro)함수

// 일반 함수

#include<stdio.h>
int MAX(int x, int y)
{
	return x > y?x : y;
}

int MIN(int x, int y)
{
	return x < y ? x : y;
}


int main()
{
	printf(" %d, %d 중 큰 값 : %d \n", 10, 50, MAX(10, 50));
	printf(" %d, %d 중 작은값 : %d \n", 10, 50, MIN(10, 50));

}