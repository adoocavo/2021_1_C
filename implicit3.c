#include <stdio.h>

int main(void)
{
	int score1, score2, score3;
	int iavg;
	double davg;
	printf("국어, 영어, 수학 과목 점수 입력(점수는 공간으로 구분) : ");
	scanf("%d%d%d", &score1, &score2, &score3 );
	
	printf("귀하의 평균은(소수점 이하 절사) : %d\n", (score1+score2+score3)/3); 
	printf("귀하의 평균은(소수점까지 표시) : %f\n", (score1+score2+score3)/3.0);
	
	return 0; 	
}
