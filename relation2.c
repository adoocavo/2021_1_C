#include<stdio.h>

int main()
{
	char c = 200;
	short s = 200;
	int i = 200;
	float f1 = 3.14;
	double d1 = 3.14;
	double d2 = 3.14f;
	
	printf("c가 s와 같은가?: %d\n", c == s);	
	printf("s가 i와 같은가?: %d\n", s == i);
	printf("i가 c와 같은가?: %d\n", i == c);	
	printf("f1이 d1과 같은가?: %d\n", f1 == d1);	
	
	printf("f1의 값: %.10f\n", f1);
	printf("d1의 값: %.10f\n", d1);	
	printf("f1이 d2와 같은가?: %d\n", f1 == d2);
	printf("f1의 값: %.10f\n", f1);
	printf("d2의 값: %.10f\n", d2);

	return 0;	
}
