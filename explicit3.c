#include<stdio.h>

int main()
{
	int i1 = 1234567890;
	float f = i1;
	double d = i1;
	int i2 = f;
	int i3 = d;
	
	printf("���� int��: %d\n", i1);
	printf("int >> float�� ��ȯ: %.10e\n", f);
	printf("int >> double�� ��ȯ: %.10e\n", d);
	printf("int >> float >> int�� ��ȯ: %d\n", i2);
	printf("int >> double >> int�� ��ȯ: %d\n", i3);
	
	return 0;	
}
