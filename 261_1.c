// 261_1 - void pointer(포인터)

// void 포인터(pointer)
#include<stdio.h>

int main(void)
{
	int a = 100;
	char b = 'M';
	double d = 1.34;

	void* p;

	// p = &b; 경고 발생

	puts(" \n void 포인터(pointer) \n");
	
	p = &a;
	printf(" *p = %3d \n\n", *(int*)p);

	p = &b;
	printf(" *p = %3c \n\n", *(char*)p);

	p = &d;
	printf(" *p = %.2lf \n\n", *(double*)p);

	return 0;
}