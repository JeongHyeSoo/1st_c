#include <stdio.h>

int main()

{
	int num;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);
	printf("���� �ڸ���:%d\n", num / 100);
	printf("���� �ڸ���:%d\n", num / 10%10);
	/// ���̵�� üũ.
	printf("���� �ڸ���:%d\n", num % 10);
	system("pause");
}