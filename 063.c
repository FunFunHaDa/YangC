// 063 - �����迭 ����� ����

#include<stdio.h>

int main()
{
	int score[5];
	int i, n;
	n = sizeof(score) / sizeof(int);

	puts("---------------------");
	puts(" �����迭�� �����");
	puts("---------------------");

	printf(" [%d]���� ���� �Է� \n", n);
	puts("---------------------");

	for (i = 0; i < n; i++)
	{
		do {
			printf("[%d]��° score�Է� : ", i);
			scanf("%d", &score[i]);
		} while (score[i] < 0 || score[i]>100);
	}

	puts("�� ��");
	for (i = 0; i < n; i++)
		printf(" score[%d] = %d \n", i, score[i]);

	puts("---------------------");
	puts(" 0 ~ 100 ���̸� �������� ����.");
	puts("---------------------");

}