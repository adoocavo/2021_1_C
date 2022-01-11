#include <stdio.h>
#include <limits.h>

int main() 
{
	char c1 = CHAR_MIN;
	char c2 = CHAR_MAX;
	unsigned char c3 = UCHAR_MAX;

	printf("char형 최솟값 : %d\n",c1);	
	printf("char형 최댓값 : %d\n",c2);		
	printf("unsigned char형 최댓값 : %u\n",c3);	 
	
	printf("=============================================================\n");
	
	c1 = 65;	
	c2 = 66;
	c3 = c2 + 1;
	
	printf("c1값 : %d, c2값 : %d, c3값 : %d\n", c1, c2, c3);
	printf("c1값 : %c, c2값 : %c, c3값 : %c\n", c1, c2, c3);

	printf("=============================================================\n");

	c1 = 'x';	
	c2 = 'y';
	c3 =  'z';
	
	printf("c1값 : %d, c2값 : %d, c3값 : %d\n", c1, c2, c3);
	printf("c1값 : %c, c2값 : %c, c3값 : %c\n", c1, c2, c3);
	
}

	
