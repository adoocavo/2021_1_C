#include<stdio.h>

int main()
{
	int i1 = 1234567890;
	float f = i1;
	double d = i1;
	int i2 = f;
	int i3 = d;
	
	printf("원래 int값: %d\n", i1);
	printf("int >> float로 변환: %.10e\n", f);
	printf("int >> double로 변환: %.10e\n", d);
	printf("int >> float >> int로 변환: %d\n", i2);
	printf("int >> double >> int로 변환: %d\n", i3);
	
	return 0;	
}
