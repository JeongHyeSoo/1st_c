#include <stdio.h>
#include <stdlib.h>

int main()
{
	// _CRT_SECURE_NO_WARNINGS;  ���� �ڿ� �Է��ϸ� scanf ��� ����..


	printf("�� ���� ������ �Է��Ͻÿ�.");
	int x, y;
	scanf("%d %d", &x, &y);
	//���� ������
	printf("x==y�� ����� : %d\n", x == y);
	printf("x!=y�� ����� : %d\n", x != y);
	printf("x>y�� ����� : %d\n", x > y);
	printf("x<y�� ����� : %d\n", x < y);
	printf("x>=y�� ����� : %d\n", x >= y);
	printf("x<=y�� ����� : %d\n", x <= y);
	//�� ������
	printf("%d && %d�� ����� : %d\n", x, y, x&&y);
	printf("%d || %d�� ����� : %d\n", x, y, x || y);
	printf("!%d�� ����� : %d\n", x, !x);
	//���� ������
	printf("(x>y)?x:y�� ����� %d\n", (x > y) ? x : y);//ū �� ��ȯ
	printf("(x<y)?x:y�� ����� %d\n", (x < y) ? x : y);//���� �� ��ȯ
	//5,0 �� ��ü�� ��ȯ ...5

	system("pause");
}