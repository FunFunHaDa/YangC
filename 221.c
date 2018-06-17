// 221 - scanf함수 VS fscanf함수

#include<stdio.h>

int main(void)
{
	int age;

	fprintf(stdout, "몇 살이세요: ");
	fscanf(stdin, "%d", &age);

	fprintf(stdout, " %d살. 동갑이네요 \n", age);
	fputs(" scanf함수는 여러형식 입력함수 \n", stdout);
	fputs(" 정수, 실문, 문자, 문자열 모두 입력 가능 \n", stdout);

	return 0;
}