#include <stdio.h>
#define PI 3.14159

int main()
{
	double r;
	double pi;
	
	printf("������ r�� �Է� : ");
	scanf("%lf", &r);
	
	printf("�������� %f�� ���� ���̴� %f�Դϴ�\n", r, PI*r*r);
	printf("�������� %e�� ���� �ѷ��� %e�Դϴ�\n", r, 2*PI*r);
	
	return 0;	
}
