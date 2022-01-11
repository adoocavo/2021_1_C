#include <stdio.h>
#include <float.h>

int main() 
{
	printf("float형의 최솟값 : %e, 최댓값 : %e\n",FLT_MIN, FLT_MAX);
	
	printf("double형의 최솟값 : %e, 최댓값 : %e\n",DBL_MIN, DBL_MAX);

	printf("long double형의 최솟값 : %e, 최댓값 : %e\n",LDBL_MIN, LDBL_MAX);
}
