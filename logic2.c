#include <stdio.h>

int main()
{
	int count = 0;
	int age = 21;
	int ok = age > 18 || ++count < 0;
	printf("논리식의 결과: %d\t count 변숫값: %d\n", ok, count);
	
	count = 0, age = 17;
	ok = age > 18 || ++count < 0;
	printf("논리식의 결과: %d\t count 변숫값: %d\n", ok, count);
	
	count = 0, age = 21;
	ok = age > 18 && ++count < 0;
	printf("논리식의 결과: %d\t count 변숫값: %d\n", ok, count);
	
	count = 0, age = 17;
	ok = age > 18 && ++count < 0;
	printf("논리식의 결과: %d\t count 변숫값: %d\n", ok, count);			
	
	return 0;
}
