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
	printf("c1 * c2�� ����� char�� �� ��ȯ �� ���: %d\n", c3);
	printf("c1 * c2�� ����� int�� ���: %d\n", i1);
	printf("�鸸 * �鸸�� ����� int�� ���: %d\n", i4);
	printf("3.14 / 2.2�� ����� float�� ���: %.10e\n", f1);	
	printf("3.14 / 2.2�� ����� double�� ���: %.10e\n", d1);
	
	return 0;	
} 
