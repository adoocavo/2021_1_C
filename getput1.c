#include <stdio.h>
#define NAT "���ѹα�"

int main()
{
	int age;
	char sex;
	char addr[100];
	char name[20];

	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);
	fflush(stdin);
	puts("���� �Է�(male(��) : m / female(��) : f) : ");
	sex = getchar();
	fflush(stdin);
	puts("�ּ� �Է� : ");
	gets(addr);
	puts("�̸� �Է� : ");
	gets(name);
	puts("\n");

	printf("%s���� ����(m:���� f:����)�� %c�̸�, %d���̰� %s %s�� ��� �ֽ��ϴ�\n", name, sex, age, NAT, addr );						

	printf("%d\n", age);
	puts(name);
	putchar(sex);
	putchar('\n');
	puts(NAT);
	puts(addr);

	return 0;	
}
