// 144 - C언어 fgets함수와 gets함수의 차이점

#include<stdio.h>
int main()
{
	char it[20];
	fputs(" fgets 함수 \n", stdout);

	fprintf(stdout, "근무하고 싶은 it회사는 : ");

	// gets(it);
	fgets(it, sizeof(it), stdin);
	fprintf(stdout, "\n %s 저도 그 회사 가고 싶어요 \n", it);

	fputs("\n---------------------\n", stdout);
	fputs(" gets함수 복습 \n", stdout);
	fputs("------------------\n", stdout);
}