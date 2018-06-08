// 145 - C언어 fscanf함수 scanf함수와 차이점

// 실수 입출력 입니다.

#include<stdio.h>
int main()
{
	float vision;

	fputs(" scanf 함수 - float \n", stdout);

	fprintf(stdout, " 당신의 시력은 : ");

	fscanf(stdin, "%f", &vision);

	fprintf(stdout, "당신의 시력은 %.1f \n", vision);

	fputs("\n------------------------------------\n", stdout);
	fputs(" %f ==> float %lf ==> double \n", stdout);
	fputs(" -------------------------------------\n", stdout);
}