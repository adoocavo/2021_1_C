#include<stdio.h>

int main()
{
	char c = 200;
	short s = 200;
	int i = 200;
	float f1 = 3.14;
	double d1 = 3.14;
	double d2 = 3.14f;
	
	printf("c�� s�� ������?: %d\n", c == s);	
	printf("s�� i�� ������?: %d\n", s == i);
	printf("i�� c�� ������?: %d\n", i == c);	
	printf("f1�� d1�� ������?: %d\n", f1 == d1);	
	
	printf("f1�� ��: %.10f\n", f1);
	printf("d1�� ��: %.10f\n", d1);	
	printf("f1�� d2�� ������?: %d\n", f1 == d2);
	printf("f1�� ��: %.10f\n", f1);
	printf("d2�� ��: %.10f\n", d2);

	return 0;	
}
