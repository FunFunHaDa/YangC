// 145 - C��� fscanf�Լ� scanf�Լ��� ������

// �Ǽ� ����� �Դϴ�.

#include<stdio.h>
int main()
{
	float vision;

	fputs(" scanf �Լ� - float \n", stdout);

	fprintf(stdout, " ����� �÷��� : ");

	fscanf(stdin, "%f", &vision);

	fprintf(stdout, "����� �÷��� %.1f \n", vision);

	fputs("\n------------------------------------\n", stdout);
	fputs(" %f ==> float %lf ==> double \n", stdout);
	fputs(" -------------------------------------\n", stdout);
}