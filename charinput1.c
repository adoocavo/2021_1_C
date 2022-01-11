#include <stdio.h>
#define NAT "대한민국"

int main()
{
	char sex;
	char city[20];
	char name[10];
	
	printf("성별 입력(F/M) : ");
	scanf("%c", &sex);
	printf("살고 있는 도시 이름과 성함을 입력(도시명 이름) : ");
	scanf("%s %s", city, name);
	printf("%s씨(%c)는 %s %s에 살고 있습니다\n", name, sex, NAT, city);

	return 0;	
}
