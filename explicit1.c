#include <stdio.h>

int main()
{
	char c = 120;
	int i = c;
	int j = 259;
	double d = 259.428;
	printf("확대 형 변환: %d\n", i);
	printf("축소 형 변환: %d\n", (char)j);
	printf("축소 형 변환: %d\n", (int)d);
	printf("축소 형 변환: %d\n", (char)d);
	
	return 0;
}
