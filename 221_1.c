// 221_1 - scanf함수 VS fscanf함수

// fscanf 함수 -문자열 입력

#include<stdio.h>

int main(void)
{
	char flower[20];
	fprintf(stdout, "좋아하는 꽃은 : ");
	fscanf(stdin, "%s", flower);

	// fgets(flower, sizeof(flower), stdin);

	fprintf(stdout, "%s 저도 좋아요 \n", flower);

	fputs(" fscanf - %s는 공백 만나면 입력 종료 \n", stdout);
	fputs(" fgets함수는 엔터 만남면 종료 \n", stdout);
	fputs(" 문자열 입력은 fgets 함수를 권장 \n", stdout);

	return 0;
}