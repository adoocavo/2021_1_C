#include <stdio.h>

int main(void)
{
	int score1, score2, score3;
	int iavg;
	double davg;
	printf("����, ����, ���� ���� ���� �Է�(������ �������� ����) : ");
	scanf("%d%d%d", &score1, &score2, &score3 );
	
	printf("������ �����(�Ҽ��� ���� ����) : %d\n", (score1+score2+score3)/3); 
	printf("������ �����(�Ҽ������� ǥ��) : %f\n", (score1+score2+score3)/3.0);
	
	return 0; 	
}
