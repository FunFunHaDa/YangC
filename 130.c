// 130 - switch~case문과 enum형

#include<stdio.h>

int main()
{
	enum week{SUN, MON, TUE, WED, THU, FRI, SAT};
	
	int number;
	while (1)
	{
		puts("\t 좋아하는 요일 ");
		puts("\t 0. 일요일 ");
		puts("\t 1. 월요일 ");
		puts("\t 2. 화요일 ");
		puts("\t 3. 수요일 ");
		puts("\t 4. 목요일 ");
		puts("\t 5. 금요일 ");
		puts("\t 6. 토요일 ");
		puts("\t ****************");
		printf(" \t 선택하세요(종료:9) [   ]\b\b\b");

		scanf("%d", &number);

		switch (number)
		{
		case SUN:
			printf(" \t %d ==> 일요일 \n", SUN); break;
		case MON:
			printf(" \t %d ==> 월요일 \n", MON); break;
		case TUE:
			printf(" \t %d ==> 화요일 \n", TUE); break;
		case WED:
			printf(" \t %d ==> 수요일 \n", WED); break;
		case THU:
			printf(" \t %d ==> 목요일 \n", THU); break;
		case FRI:
			printf(" \t %d ==> 금요일 \n", FRI); break;
		case SAT:
			printf(" \t %d ==> 토요일 \n", SAT); break;
		case 9:
			printf(" \t %d 프로그램 종료합니다. \n", number); 
			return 1;
		default:
			printf(" \t %d ==> 없는 요일입니다. \a\a\n", number);
			continue;
		}
	}
	return 0;
}