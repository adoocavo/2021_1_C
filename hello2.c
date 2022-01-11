#include <stdio.h>

main()
{
	int i = 1;
	int sum = 0;
	
	while (i < 100)
	{
		sum = sum + i;
		i = i+1;
	}
	
	printf("1부터 100까지의 합 %d", sum);
}


