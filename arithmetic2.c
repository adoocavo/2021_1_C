#include<stdio.h>

int main()
{
	char c1 = 127, c2 = 2;
	char c3 = c1 * c2;
	int i1 = c1 * c2;
	int i2 = 1000000, i3 = 1000000;
	int i4 = i2 * i3;
	float f1 = 3.14 / 2.2;
	double d1 = 3.14 / 2.2;
	printf("c1 * c2의 결과를 char로 형 변환 후 출력: %d\n", c3);
	printf("c1 * c2의 결과를 int로 출력: %d\n", i1);
	printf("백만 * 백만의 결과를 int로 출력: %d\n", i4);
	printf("3.14 / 2.2의 결과를 float로 출력: %.10e\n", f1);	
	printf("3.14 / 2.2의 결과를 double로 출력: %.10e\n", d1);
	
	return 0;	
} 
