#include <stdio.h>
#include <stdlib.h>

int main()
{
	// _CRT_SECURE_NO_WARNINGS;  설정 뒤에 입력하면 scanf 사용 가능..


	printf("두 개의 정수를 입력하시오.");
	int x, y;
	scanf("%d %d", &x, &y);
	//관계 연산자
	printf("x==y의 결과값 : %d\n", x == y);
	printf("x!=y의 결과값 : %d\n", x != y);
	printf("x>y의 결과값 : %d\n", x > y);
	printf("x<y의 결과값 : %d\n", x < y);
	printf("x>=y의 결과값 : %d\n", x >= y);
	printf("x<=y의 결과값 : %d\n", x <= y);
	//논리 연산자
	printf("%d && %d의 결과값 : %d\n", x, y, x&&y);
	printf("%d || %d의 결과값 : %d\n", x, y, x || y);
	printf("!%d의 결과값 : %d\n", x, !x);
	//조건 연산자
	printf("(x>y)?x:y의 결과값 %d\n", (x > y) ? x : y);//큰 값 반환
	printf("(x<y)?x:y의 결과값 %d\n", (x < y) ? x : y);//작은 값 반환
	//5,0 값 자체의 반환 ...5

	system("pause");
}