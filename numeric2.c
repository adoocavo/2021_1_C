#include <stdio.h>
#include <limits.h>

int main() 
{
	short s1 = SHRT_MIN;
	short s2 = SHRT_MAX;
	unsigned short us1 = 0;
	unsigned short us2 = USHRT_MAX;	
	
	printf("short�� �ּڰ� : %d\n",s1);	
	
	printf("short�� �ִ� : %d\n",s2);		
	
	printf("unsigned short�� �ּڰ� : %u\n",us1);	 
	
	printf("unsigned short�� �ִ� : %u\n",us2);	 
	
	printf("=============================================================\n");
	
	s1 = SHRT_MIN - 1;	

	s2 = SHRT_MAX + 1;	

	us1 = 0 - 1;
	
	us2 = USHRT_MAX + 1;	

	printf("short�� �ּڰ�-1 : %d\n",s1);

	printf("short�� �ּڰ�+1 : %d\n",s2);
	
	printf("unsigned short�� �ּڰ�-1 : %u\n",us1);	 
	
	printf("unsigned short�� �ִ�+1 : %u\n",us2);	 	
	
}

