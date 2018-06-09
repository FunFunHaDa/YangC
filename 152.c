// 152 - 함수에서 인수(argument)의 전달

#include<stdio.h>

void sub1(void)
{
	puts(" sub1함수 => 인수도 없고, 리턴값도 없다.\n");
}

void sub2(int x)
{
	printf(" sub2함수 x = %d \n", x);
	puts(" 정수 한 개 인수로 전달, 리턴값 없다. \n");
}

void sub3(int x, int y)
{
	int sum = x + y;
	printf(" sub3함수 %d + %d = %d \n", x, y, sum);
	puts(" 정수 두 개 인수로 전달, 두 값을 더했다. \n");
}

int main(void)
{
	sub1();
	sub2(100);
	sub3(200, 300);

	puts(" 전달인수는 없을수도 있고요");
	puts(" 한 개일수도 있고요. ");
	puts(" 여러개일수도 있어요. ");
	puts(" void는 전달인수가 없다는 의미입니다. ");
	return 0;
}