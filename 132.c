// 132 - 비교연산자(크다, 작다, 같다, 같지 않다)

#include<stdio.h>

int main()
{
	puts(" 값의 비교 ");

	printf(" 3과 3은 같다 : %d \n", 3 == 3);
	printf(" 3과 3은 같지 않다 : %d \n", 3 != 3);

	printf(" 2보다 3이크다 : %d \n", 3 > 2);
	printf(" 3보다 2가크다 : %d \n", 3 < 2);

	puts("---------------------------");
	puts(" >=, <= 은 된다. =>, =< 은 안된다. ");
	puts("---------------------------");
}