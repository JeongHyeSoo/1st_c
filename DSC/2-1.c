#include <stdio.h>
#include <stdlib.h>

int main()
{


	//3x^3-7x^2+9를 실행하는 프로그램.

	printf("x의 값을 입력하시오.");
	double x; 
	scanf_s("%lf", &x);
	double RS;
	RS = 3 * x*x*x - 7 * x*x + 9;// 산술 연산시 우선순위가 적용된다.
	printf("다항식의 값은 %.3lf입니다.\n", RS);
	system("pause");//
}