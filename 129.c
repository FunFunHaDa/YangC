// 129 - C프로그래밍 switch~case 메뉴 만들기

#include<stdio.h>

int main()
{
	int choice; 
	
	puts(" \t MENU");
	puts(" \t 1. 공 무 원 ");
	puts(" \t 2. 회 사 원 ");
	puts(" \t 3. 자 영 업 ");
	puts(" \t 4. 여 행 가 ");
	puts(" \t 5. 빵 집 주 인 ");
	puts(" \t 6. 백 수 ");
	puts(" \t **************");
	printf(" \t 희망직업 [   ]\b\b\b");

	scanf("%d", &choice);

	switch (choice)
	{
	case 1:
		printf(" \t ==> 공무원 \n"); break;
	case 2:
		printf(" \t ==> 회사원 \n"); break;
	case 3:
		printf(" \t ==> 자영업 \n"); break;
	case 4:
		printf(" \t ==> 여행가 \n"); break;
	case 5:
		printf(" \t ==> 빵집주인 \n"); break;
	case 6:
		printf(" \t ==> 백 수 \n"); break;
	default:
		puts(" 아 나좀 내버려 둬 !!!");
	}
	return 0;

}