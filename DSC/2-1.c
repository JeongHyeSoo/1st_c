#include <stdio.h>
#include <stdlib.h>

int main()
{


	//3x^3-7x^2+9�� �����ϴ� ���α׷�.

	printf("x�� ���� �Է��Ͻÿ�.");
	double x; 
	scanf_s("%lf", &x);
	double RS;
	RS = 3 * x*x*x - 7 * x*x + 9;// ��� ����� �켱������ ����ȴ�.
	printf("���׽��� ���� %.3lf�Դϴ�.\n", RS);
	system("pause");//
}