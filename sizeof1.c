#include <stdio.h>
#define NAT "대한민국"

int main() 
{
	short s;
	int num = 100;
	long lnumber;
	char sex;
	float f = 3.14;
	double d;
	long double ld;
	
	printf("short형의 크기 sizeof(short) : %d  sizeof(변수명) : %d\n",sizeof(short), sizeof(s));
	
	printf("int형의 크기 sizeof(int) : %d  sizeof(변수명) : %d\n",sizeof(int), sizeof(num));
	
	printf("long형의 크기 sizeof(long) : %d  sizeof(변수명) : %d\n",sizeof(long), sizeof(lnumber));
	
	printf("char형의 크기 sizeof(char) : %d  sizeof(변수명) : %d\n",sizeof(char), sizeof(sex));
	
	printf("float형의 크기 sizeof(float) : %d  sizeof(변수명) : %d\n",sizeof(float), sizeof(f));
	
	printf("double형의 크기 sizeof(double) : %d  sizeof(변수명) : %d\n",sizeof(double), sizeof(d));
	
	printf("long double형의 크기 sizeof(long double) : %d  sizeof(변수명) : %d\n",sizeof(long double), sizeof(ld));
	
	printf("문자 리터럴 \"대한민국\"의 크기 : %d\n",sizeof(NAT));
	
	printf("문자 리터럴 \"university\"의 크기 : %d\n",sizeof("university"));
	
}
