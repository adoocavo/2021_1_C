#include <stdio.h>

int main()

{
	int avg1 = 9/2;
	double avg2 = 9/2;
	double avg3 = 9/2.0;
	double avg4 = 9.0/2;
	double avg5 = 9.0/2.0;
	int avg6 = 9.0/2.0;
	
	printf("int avg1 = 9/2의 결과는 : %d\n", avg1);
	printf("doulbe avg2 = 9/2의 결과는 : %f\n", avg2);
	printf("double avg3 = 9/2.0의 결과는 : %f\n", avg3);
	printf("double avg4 = 9.0/2의 결과는 : %f\n", avg4);
	printf("double avg5 = 9.0/2.0의 결과는 : %f\n", avg5);
	printf("int avg6 = 9.0/2.0의 결과는 : %d\n", avg6);
}
