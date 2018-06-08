// 145 - C언어 fscanf함수 scanf함수와 차이점

// 정수 한개 입력 받기

#include<stdio.h>

int main()
{
	int age; 
	fputs(" fscanf 함수 - 정수 \n", stdout);

	fprintf(stdout, "몇 살이예요 : ");
	fscanf(stdin, "%d", &age);

	fprintf(stdout, "%d살 동갑이네요 \n", age);

	fputs("\n---------------------------------------\n", stdout);
	fputs(" scanf함수는 여러형식 입력함수 \n", stdout);
	fputs(" 정수, 실수, 문자, 문자열 모두 입력 가능 \n", stdout);
	fputs(" ---------------------------------------\n", stdout);

}