#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 1;

	//��Ģ���� ����

	printf("3+2�� ���� %d\n", 3 + 2);
	printf("3-2�� ���� %d\n", 3 - 2);

	printf("x�� ���� %d\n", x);
	printf("x+1�� ���� %d\n", x + 1);
	printf("x++�� ���� %d\n", x++);// ���� �� �� ���� = ��� �� ����
	printf("++x�� ���� %d\n", ++x);// ��� �� �� ���� = ���� �� ���


	system("pause");
	// �� ��°

	int a, b, result;
	printf("�� ���� ������ �Է�");
	scanf("%d %d", &a, &b);

	result = a + b;
	printf("%d + %d = %d\n", a, b, result);

	result = a - b;
	printf("%d - %d = %d\n", a, b, result);

	result = a * b;
	printf("%d * %d = %d\n", a, b, result);

	result = a % b;
	printf("%d %% %d = %d\n", a, b, result);

	system("pause");
}