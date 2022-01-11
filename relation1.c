#include<stdio.h>

int main()
{
	char c = 20;
	double d = 3.14;
	int flag = c < d;
	printf("c가d보다 큰가?: %d\n", c>d);
	printf("c가d보다 작은가?: %d\n", flag);	
	printf("c가20.0f와 같은가?: %d\n", c == 20.0f);
	printf("10과 10.0이 같지 않은가?: %d\n", 10!= 10.0);
	printf("20이 20보다 작거나 같은가?: %d\n", 20<=20);	
	printf("20이 20보다 크거나 같은가?: %d\n", 20>=20);		
}

