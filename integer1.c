#include <stdio.h>

int main()
{
	int u_price = -300;
	int count = 9;
	
	printf("%d원짜리 %d개를 사면 %d입니다\n",300,9,300*9);
	printf("%i원짜리 %i개를 사면 %i입니다\n",u_price, count,u_price*count);
	
	printf("10진수 15를 16진수로 출력하면 : %x, 8진수로 출력하면 : %o\n", 15, 15);
	printf("음숫값 -10을 %%d로 출력하면 : %d, %%u로 출력하면 : %u\n", -10, -10);
	
	return 0;	
}
