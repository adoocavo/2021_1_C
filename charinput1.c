#include <stdio.h>
#define NAT "���ѹα�"

int main()
{
	char sex;
	char city[20];
	char name[10];
	
	printf("���� �Է�(F/M) : ");
	scanf("%c", &sex);
	printf("��� �ִ� ���� �̸��� ������ �Է�(���ø� �̸�) : ");
	scanf("%s %s", city, name);
	printf("%s��(%c)�� %s %s�� ��� �ֽ��ϴ�\n", name, sex, NAT, city);

	return 0;	
}
