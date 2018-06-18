// 224 - fseek함수

// fseek 함수

#include<stdio.h>
int main()
{
	FILE * fp = fopen("C:\\dd\\alpha.txt", "w");
	char c = 0;
	int i;

	if (fp == NULL)
	{
		puts(" Cannot file open ! ");
		return 1;
	}

	for (i = 65; i <= 90; i++)
	{
		fputc(i, fp);
	}

	fclose(fp);
	fp = fopen("c:\\dd\\alpha.txt", "r");


	//fseek(fp, 3, SEEK_SET);
	//fseek(fp, -3, SEEK_END);
	//fseek(fp, 1, SEEK_CUR);

	while (c != EOF)
	{
		c = fgetc(fp);
		fputc(c, stdout);
	}

	fclose(fp);
	return 0;
}