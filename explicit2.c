#include<stdio.h>

int main()
{
	int i = '1';
	int j = 'A';
	int k = '1' + 'A';
	char l = j+1;
	
	printf("\'1\' = %d\n", i);
	printf("\'A\' = %d\n", j);
	printf("\'1\' + \'A\' = %d\n", k);
	printf("\'A\' 다음 문자는: %c\n", l);
	
	return 0;

}
