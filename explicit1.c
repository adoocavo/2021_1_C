#include <stdio.h>

int main()
{
	char c = 120;
	int i = c;
	int j = 259;
	double d = 259.428;
	printf("Ȯ�� �� ��ȯ: %d\n", i);
	printf("��� �� ��ȯ: %d\n", (char)j);
	printf("��� �� ��ȯ: %d\n", (int)d);
	printf("��� �� ��ȯ: %d\n", (char)d);
	
	return 0;
}
