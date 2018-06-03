// 076 - 구조체 값변경

#include<stdio.h>
#include<string.h>

struct  Lunch
{	
	char menu[20];
	int price;
};

typedef struct Lunch Lunch;

int main()
{
	Lunch lun1 = { "햄버거", 4000 }, lun2 = { "돈까스", 8000 };

	Lunch tmp;

	puts("-------------------------");
	puts(" 구조체 맞교환");
	puts("-------------------------");

	puts(" 원 래 값");
	puts("-------------------------");
	printf(" lun1 : %s ==> %d원 \n", lun1.menu, lun1.price);
	printf(" lun2 : %s ==> %d원 \n", lun2.menu, lun2.price);

	strcpy(lun1.menu, "탕수육");
	lun2.price = 9900;

	puts("변경후");
	puts("-------------------------");
	printf(" lun1 : %s ==> %d원 \n", lun1.menu, lun1.price);
	printf(" lun2 : %s ==> %d원 \n", lun2.menu, lun2.price);
	puts("-------------------------");

	puts(" 구조체맞교환과 멤버값 변경은 다른다");
	puts("-------------------------");


}