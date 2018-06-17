// 223 - 파일출력 (fopen함수, fputs함수)

// 파일에 출력하기 fopen함수

#include<stdio.h>

int main() {
	FILE * fp = fopen("c:\\dd\\b.txt", "w");

	if (fp == NULL)
	{
		puts("파일 열기 실패");
		return 1;
	}

	fputs(" 즐거운 금요일이다. \n", stdout);
	fputs(" 2016년 여름은 뜨거웠다. \n", stdout);

	fputs(" 즐거운 금요일이다. \n", fp);
	fputs(" 2016년 여름은 뜨거웠다. \n", fp);

	fclose(fp);

	return 0;
}