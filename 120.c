// 120 - C프로그램 다중 if문

#include<stdio.h>

int main()
{
	int score;
	puts("------------------");
	puts(" 다중 if문");
	puts("------------------");

	do {
		printf(" Enter score : ");
		scanf("%d", &score);
	} while (score > 100 || score < 0);

		if (score > 90)
			printf(" score : %d , 수 \n", score);
		else if(score > 80)
			printf(" score : %d , 우 \n", score);
		else if(score > 70)
			printf(" score : %d , 미 \n", score);
		else if(score > 60)
			printf(" score : %d , 양 \n", score);
		else
			printf(" score : %d , 가. 아자아자 힘내자 \n", score);
		
		puts("------------------");
		puts(" 아래로 내려갈수록 깔떼기처럼 범위 좁아진다. ");
		puts(" 참 거짓을 구분하고 다시 거짓을 가지고 반복한다. ");
		puts("------------------");




}