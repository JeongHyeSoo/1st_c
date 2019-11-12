#include <stdio.h>
#include <stdlib.h>

void main()
{
	short a = 32767;
	//최댓값
	int b = 2147483647;
	long c = 2147483647;
	float d = 1.2E38;
	double e = 1.8E307;

	printf("수===============================================\n");
	printf("%d\n%d\n%d\n\n%.3lf\n%.3lf\n\n", a, b, c, d, e);

	char f = 'A';
	//1바이트
	char g[13 ] = "Hello world";
	//10글자를 받고 싶다. g는 이름 []배열 10개 짜리 > [10] 메모리에 10자리 찾는담 근데 10글자 x. 11로하쟝

	printf("문자============================================\n");
	printf("%c\n%s\n",f, g);
	system("pause");
}