// 145 - C언어 fscanf함수 scanf함수와 차이점

// 정수 두 개 입력입니다

#include<stdio.h>

int main()
{
	int a, b;
	fputs(" scanf 함수 - 정수 두개 \n", stdout);

	fprintf(stdout, " 첫 번째 정수 입력 : ");

	fscanf(stdin, "%d", &a);

	fprintf(stdout, " 두 번째 정수 입력 : ");

	fscanf(stdin, "%d", &b);

	fprintf(stdout, " a = %d, b = %d \n", a, b);

	fputs("\n----------------------------------------------------\n", stdout);
	fputs(" 연속 2개를 입력받을 때는 따로따로 받는게 좋아요 \n", stdout);
	fputs(" ----------------------------------------------------\n", stdout);

}