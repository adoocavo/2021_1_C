#include<stdio.h>

int main()
{
	int a = 5, b = 2;
	float f = 3.14;
	double d = 3.14159;
	int sum = a + b;
	int sub = a - b;
	int mul = a * b;
	int div = a / b;
	int mod = a%b;
	int inca = ++a;
	int incb = b++;
	float incf = ++f;
	double incd = d++;
	
	printf("a + b = %d\n",sum);
	printf("a - b = %d\n",sub);	
	printf("a * b = %d\n",mul);
	printf("a / b = %d\n",div);
	printf("a %% b = %d\n",mod);
	printf("a�� ������������(prefix) = %d\n", inca);
	printf("a������ �� = %d\n",a);
	printf("b�� ������������(postfix) = %d\n", incb);
	printf("b������ �� = %d\n",b);
	printf("f�� ������������(prefix) = %f\n", incf);
	printf("f������ �� = %f\n",f);
	printf("d�� ������������(postfix) = %f\n", incd);
	printf("d������ �� = %f\n",d);	
	
	return 0;
}
