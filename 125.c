// 125 - C���α׷����� switch ~ case�� - �ι�°

#include<stdio.h>

int main()
{
	int a;

	puts("----------------------");
	puts(" switch ~ case��");
	puts("----------------------");

	puts(" \t TV ä�� ����");
	puts(" \t\t 6. SBS");
	puts(" \t\t 7. KBS2");
	puts(" \t\t 9. KBS");
	puts(" \t\t 11. MBC");
	puts(" \t\t 13. EBS");
	puts(" \t\t *******");
	printf(" \t ��ܺ��� TV ä�� [  ]\b\b\b");
	scanf("%d", &a);


	switch (a)
	{
	case 6: printf("\tä���� %d ==> SBS \n", a); break;
	case 7: printf("\tä���� %d ==> KBS2 \n", a); break;
	case 9: printf("\tä���� %d ==> KBS \n", a); break;
	case 11: printf("\tä���� %d ==> MBC \n", a); break;
	case 13: printf("\tä���� %d ==> EBS \n", a); break;
	default: printf("\t%d ==> ���� ä��.\n", a); break; 
	}

	puts("-----------------------");
	puts(" a�� case���� �ش�");
	puts(" case�� �ش�Ǹ� �� �������� �ٷ� ����. ");
	puts(" �ش�Ǵ� case�� ������ default���� ����");
	puts("-----------------------");

}