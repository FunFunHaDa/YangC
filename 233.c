// 233 - 조건부 컴파일

#include<stdio.h>

#define P printf

#define NUM1 500
#define NUM3 555

#ifdef NUM1		
#define NUM1 10000
#else
#define NUM1 20000
#endif // NUM1

#ifdef NUM2		
#define NUM2 30000
#else
#define NUM2 40000
#endif

#ifdef NUM3		
#define NUM3 77777
#else
#define NUM3 88888
#endif

#ifdef NUM4		// 참
#define NUM4 77777
#else
#define NUM4 88888
#endif

int main()
{
	P(" NUM1 = %d \n", NUM1);
	P(" NUM2 = %d \n", NUM2);
	P(" NUM3 = %d \n", NUM3);
	P(" NUM4 = %d \n", NUM4);
	return 0;

}







