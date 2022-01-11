#include <stdio.h>
#define NAT "대한민국"

int main()
{
	int age;
	char sex;
	char addr[100];
	char name[20];

	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	fflush(stdin);
	puts("성별 입력(male(남) : m / female(여) : f) : ");
	sex = getchar();
	fflush(stdin);
	puts("주소 입력 : ");
	gets(addr);
	puts("이름 입력 : ");
	gets(name);
	puts("\n");

	printf("%s씨는 성별(m:남자 f:여자)은 %c이며, %d살이고 %s %s에 살고 있습니다\n", name, sex, age, NAT, addr );						

	printf("%d\n", age);
	puts(name);
	putchar(sex);
	putchar('\n');
	puts(NAT);
	puts(addr);

	return 0;	
}
