// 253 - 다양한 정수 자료형(__int16, 32, 64)

#include<stdio.h>

int main(void)
{
	__int16 a1;	// 2 byte
	__int32 a2;	// 4 byte
	__int64 a3; // 8 byte
	long a4;
	long long a5;

	puts(" 정수 자료형의 종류 \n");

	printf(" __int16 a1 = %d byte \n", sizeof(__int16));
	printf(" __int32 a2 = %d byte \n", sizeof(__int32));
	printf(" __int64 a3 = %d byte \n", sizeof(__int64));

	printf(" long a4 = %d byte \n", sizeof(long));
	printf(" long long = %d byte \n", sizeof(long long));

	return 0;
}