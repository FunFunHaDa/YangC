// 029 - 정수와 문자와의 관계

#include<stdio.h>

int main(void)
{
	puts("--------------------");
	puts(" 정수와 문자와의 관계");
	puts("--------------------");

	printf(" 65 ==> [%%d = %d, %%c = %c] \n", 65, 65);
	printf(" 66 ==> [%%d = %d, %%c = %c] \n", 66, 66);

	printf(" 97 ==> [%%d = %d, %%c = %c] \n", 97, 97);
	printf(" 98 ==> [%%d = %d, %%c = %c] \n", 98, 98);

	printf(" A ==> [%%d = %d, %%c = %c] \n", 'A', 'A');
	printf(" B ==> [%%d = %d, %%c = %c] \n", 'B', 'B');

	printf(" a ==> [%%d = %d, %%c = %c] \n", 'a', 'a');
	printf(" b ==> [%%d = %d, %%c = %c] \n", 'b', 'b');

	puts("-----------------------");
	puts(" A는 실제로 메모리에 65로 변환되어 저장됩니다.");
	puts(" 문자를 저장할 수 없습니다. 0과 1만 알아요");
	puts("-----------------------");

	return 0;

}