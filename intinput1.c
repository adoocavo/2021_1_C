#include <stdio.h>

int main()
{
	int price;
	int count;
	
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &price);
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &count);
	
	printf("�����մϴ�. %d��¥�� %d���� �����ϼ̽��ϴ�. �Ѿ��� %d�Դϴ�\n", price, count, price*count);
	printf("price ������ ���� : %d, �ּҴ� : %0x\n",price , &price);	 
	printf("count ������ ���� : %d, �ּҴ� : %0x\n",count , &count);	 
	
	return 0;	
}
