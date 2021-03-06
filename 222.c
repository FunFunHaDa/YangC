// 222 - 파일처리 fopen함수

// http://blog.naver.com/ahalinux/220791086052 [미리 파일을 만듦]

// 파일 읽어오기 fopen함수

#include<stdio.h>

int main()
{
	char c = 0;

	FILE* fp = fopen("c:\\dd\\a.txt", "r");

	if (fp == NULL)
	{
		puts(" 파일 열기 실패");
		return 1;
	}

	while (c != EOF) // EOF(end of file) 파일의 끝이 아닌 동안
	{
		c = fgetc(fp);
		putchar(c);
	}

	fclose(fp);
	return 0;
}

