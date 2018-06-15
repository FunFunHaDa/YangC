// 206 - 문자열 입력(fgets 함수 이용)

//#include<stdio.h>
//
//int main()
//{
//	char name[10];
//
//	printf(" 이름을 입력하세요 : ");
//	fgets(name, sizeof(name), stdin);
//	name[strlen(name) - 1] = 0;
//
//	printf(" %s님반갑습니다. ", name);
//
//	return 0;
//}


// 문자열 입력

#include<stdio.h>
#include<string.h>

int main()
{
	char name[5][10];
	int i, n;
	n = sizeof(name) / sizeof(char[10]);

	printf(" [%d] 명의 이름 입력\n", n);

	for (i = 0; i < n; i++)
	{
		printf(" [%d]번째 이름 :", i);
		fgets(name[i], sizeof(char[10]), stdin);
		name[i][strlen(name[i]) - 1] = 0;
	}

	puts("\n 출력");
	for (i = 0; i < n; i++)
	{
		printf(" [%d]번 째 이름 ==> %s \n", i, name[i]);
	}
	return 0;
}