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
	printf("a의 전위증가연산(prefix) = %d\n", inca);
	printf("a변수의 값 = %d\n",a);
	printf("b의 후위증가연산(postfix) = %d\n", incb);
	printf("b변수의 값 = %d\n",b);
	printf("f의 전위증가연산(prefix) = %f\n", incf);
	printf("f변수의 값 = %f\n",f);
	printf("d의 후위증가연산(postfix) = %f\n", incd);
	printf("d변수의 값 = %f\n",d);	
	
	return 0;
}
