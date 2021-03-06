// 228 - time함수, localtime함수

#include<stdio.h>
#include<time.h>

typedef struct tm tm;

int main()
{
	time_t ltime;
	tm* today;
	int year, month, day;
	time(&ltime);

	today = (localtime(&ltime));

	year = today->tm_year + 1900;
	month = today->tm_mon + 1;
	day = today->tm_mday;

	printf(" 오늘은 %d년 %d월 %d일 \n", year, month, day);
	
	printf(" 오늘은 %d일째 되는 날 \n", today->tm_yday);

	printf(" 현재시간 %d시 %d분 %d초 \n", today->tm_hour, today->tm_min, today->tm_sec);
	return 0;
}