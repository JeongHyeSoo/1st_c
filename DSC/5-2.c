#include <stdio.h>

int main()

{
	int*b;
	int a[]
		= { 1,2,3,4,5 };
	b = a;
	/*1번째 배열의 주소를 준 것*/
	for (int i = 0; i < 5; i++)
	{
		printf("a[%d]의 주소값: %u\n", i, &a[i]);
	}

printf("%d\n",b);/*첫번째 값 주소*/
printf("%d\n",*b);/*1이 나옵니다*/
printf("%d\n", ++b);/*두번째 값 주소*/
printf("%d\n", ++*(b));/*2가 나옵니다*/

}