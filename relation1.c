#include<stdio.h>

int main()
{
	char c = 20;
	double d = 3.14;
	int flag = c < d;
	printf("c��d���� ū��?: %d\n", c>d);
	printf("c��d���� ������?: %d\n", flag);	
	printf("c��20.0f�� ������?: %d\n", c == 20.0f);
	printf("10�� 10.0�� ���� ������?: %d\n", 10!= 10.0);
	printf("20�� 20���� �۰ų� ������?: %d\n", 20<=20);	
	printf("20�� 20���� ũ�ų� ������?: %d\n", 20>=20);		
}

