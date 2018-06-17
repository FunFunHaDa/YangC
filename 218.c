// 218 - printf함수 VS fprintf함수

#include<stdio.h>

int main()
{
	puts(" printf함수 출력");

	printf(" %d, %.1f %c %s \n", 20, 3.14, 'A', "kora");
	printf("인생은 한 판의 연극이다. \n");

	fprintf(stdout, "\n fprintf함수 출력");
	fprintf(stdout, "%d, %.1f, %c, %s \n", 20, 3.14, 'A', "kora");
	
	fprintf(stdout, "인생은 한 판의 연극이다. \n");
	fprintf(stdout, "모니터 지정을 하는 stdout이 앞에 나와요 \n");
	fprintf(stdout, "fputs함수와 차이점은 \n");
	fprintf(stdout, "인수위치가 달라요, fputs함수는 뒤에 나오죠. \n");

	return 0;
}