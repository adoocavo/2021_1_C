#include <stdio.h>

int main()
{
	int price;
	int count;
	
	printf("가격을 입력하시오 : ");
	scanf("%d", &price);
	printf("수량을 입력하시오 : ");
	scanf("%d", &count);
	
	printf("감사합니다. %d원짜리 %d개를 선택하셨습니다. 총액은 %d입니다\n", price, count, price*count);
	printf("price 변수의 값은 : %d, 주소는 : %0x\n",price , &price);	 
	printf("count 변수의 값은 : %d, 주소는 : %0x\n",count , &count);	 
	
	return 0;	
}
