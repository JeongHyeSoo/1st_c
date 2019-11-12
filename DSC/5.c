#include <stdio.h>

int main()

{
	int num;
	printf("정수를 입력하시오 : ");
	scanf("%d", &num);
	printf("백의 자리수:%d\n", num / 100);
	printf("십의 자리수:%d\n", num / 10%10);
	/// 아이디어 체크.
	printf("일의 자리수:%d\n", num % 10);
	system("pause");
}