// 145 - C언어 fscanf함수 scanf함수와 차이점

// 문자열 입출력이네요.

#include<stdio.h>
int main()
{
	char flower[20];

	fputs(" fscanf 함수 - 문자열 입력 \n", stdout);

	fprintf(stdout, " 좋아하는 꽃은 : ");

	fscanf(stdin, "%s", flower);

	fprintf(stdout, "%s 저도 좋아요 \n", flower);

	fputs("\n--------------------------------------\n", stdout);
	fputs(" fscanf-%s 공백 만나면 입력 종료 \n", stdout);
	fputs(" fgets함수는 엔터 만나면 입력 종료 \n", stdout);
	fputs(" 문자열입력은 fgets함수를 권장 \n", stdout);
	fputs(" --------------------------------------\n", stdout);
}