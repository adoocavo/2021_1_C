#include <stdio.h>
#include <limits.h>

int main() 
{
	char c1 = CHAR_MIN;
	char c2 = CHAR_MAX;
	unsigned char c3 = UCHAR_MAX;

	printf("char�� �ּڰ� : %d\n",c1);	
	printf("char�� �ִ� : %d\n",c2);		
	printf("unsigned char�� �ִ� : %u\n",c3);	 
	
	printf("=============================================================\n");
	
	c1 = 65;	
	c2 = 66;
	c3 = c2 + 1;
	
	printf("c1�� : %d, c2�� : %d, c3�� : %d\n", c1, c2, c3);
	printf("c1�� : %c, c2�� : %c, c3�� : %c\n", c1, c2, c3);

	printf("=============================================================\n");

	c1 = 'x';	
	c2 = 'y';
	c3 =  'z';
	
	printf("c1�� : %d, c2�� : %d, c3�� : %d\n", c1, c2, c3);
	printf("c1�� : %c, c2�� : %c, c3�� : %c\n", c1, c2, c3);
	
}

	
