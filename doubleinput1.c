#include <stdio.h>
#define PI 3.14159

int main()
{
	double r;
	double pi;
	
	printf("반지름 r을 입력 : ");
	scanf("%lf", &r);
	
	printf("반지름이 %f인 원의 넓이는 %f입니다\n", r, PI*r*r);
	printf("반지름이 %e인 원의 둘레는 %e입니다\n", r, 2*PI*r);
	
	return 0;	
}
