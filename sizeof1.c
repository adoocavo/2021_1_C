#include <stdio.h>
#define NAT "���ѹα�"

int main() 
{
	short s;
	int num = 100;
	long lnumber;
	char sex;
	float f = 3.14;
	double d;
	long double ld;
	
	printf("short���� ũ�� sizeof(short) : %d  sizeof(������) : %d\n",sizeof(short), sizeof(s));
	
	printf("int���� ũ�� sizeof(int) : %d  sizeof(������) : %d\n",sizeof(int), sizeof(num));
	
	printf("long���� ũ�� sizeof(long) : %d  sizeof(������) : %d\n",sizeof(long), sizeof(lnumber));
	
	printf("char���� ũ�� sizeof(char) : %d  sizeof(������) : %d\n",sizeof(char), sizeof(sex));
	
	printf("float���� ũ�� sizeof(float) : %d  sizeof(������) : %d\n",sizeof(float), sizeof(f));
	
	printf("double���� ũ�� sizeof(double) : %d  sizeof(������) : %d\n",sizeof(double), sizeof(d));
	
	printf("long double���� ũ�� sizeof(long double) : %d  sizeof(������) : %d\n",sizeof(long double), sizeof(ld));
	
	printf("���� ���ͷ� \"���ѹα�\"�� ũ�� : %d\n",sizeof(NAT));
	
	printf("���� ���ͷ� \"university\"�� ũ�� : %d\n",sizeof("university"));
	
}
