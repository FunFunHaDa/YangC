// 261 - void pointer(포인터)

// void 포인터(pointer)
#include<stdio.h>

int main(void)
{
	int a = 100;
	char b = 'M';
	double d = 1.34;

	int * ap = &a;

	// ap = &b; 경고 발생

	puts(" \n void 포인터(pointer) \n");

	printf(" a = %3d, &a = %d \n", a, &a);
	printf(" b = %3c, &b = %d \n", b, &b);
	printf(" d = %.1f, &d = %d \n", d, &d);

	printf(" *ap = %3d, ap = %d, &ap = %d \n\n", *ap, ap, &ap);

	return 0;

}