#include <stdio.h>
#include <stdlib.h>

void main()
{
	short a = 32767;
	//�ִ�
	int b = 2147483647;
	long c = 2147483647;
	float d = 1.2E38;
	double e = 1.8E307;

	printf("��===============================================\n");
	printf("%d\n%d\n%d\n\n%.3lf\n%.3lf\n\n", a, b, c, d, e);

	char f = 'A';
	//1����Ʈ
	char g[13 ] = "Hello world";
	//10���ڸ� �ް� �ʹ�. g�� �̸� []�迭 10�� ¥�� > [10] �޸𸮿� 10�ڸ� ã�´� �ٵ� 10���� x. 11������

	printf("����============================================\n");
	printf("%c\n%s\n",f, g);
	system("pause");
}