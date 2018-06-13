// 199-1 - 구조체 동적할당(malloc, free함수)

// 패딩바이트 없애기

#include<stdio.h>
#pragma pack(1)

typedef struct Book
{
	char BookTitle[20];
	char BookAuthor[30];
	int pages;
}Book;

int main()
{
	Book b = { "정글만리", "조정래", 2030 };

	printf("#pragma pack(1) 설정 후 b = %d byte \n", sizeof(b));

	return 0;
}