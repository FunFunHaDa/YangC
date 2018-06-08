// C언어 fgets함수 getchar함수와 차이점

#include<stdio.h>

int main()
{
	char b_type;
	fputs(" fgetc 함수 \n", stdout);

	fprintf(stdout, " 당신의 혈액형은 : ");

	// b_type = getchar();
	b_type = fgetc(stdin);

	fprintf(stdout, "\n %c형이군요. 반갑습니다. \n", b_type);

	fputs("\n--------------------------------------\n", stdout);
	fputs(" 이미 알고 있는 getchar함수 입니다 \n", stdout);
	fputs("-----------------------------------------\n",stdout);

}