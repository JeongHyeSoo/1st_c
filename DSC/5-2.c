#include <stdio.h>

int main()

{
	int*b;
	int a[]
		= { 1,2,3,4,5 };
	b = a;
	/*1��° �迭�� �ּҸ� �� ��*/
	for (int i = 0; i < 5; i++)
	{
		printf("a[%d]�� �ּҰ�: %u\n", i, &a[i]);
	}

printf("%d\n",b);/*ù��° �� �ּ�*/
printf("%d\n",*b);/*1�� ���ɴϴ�*/
printf("%d\n", ++b);/*�ι�° �� �ּ�*/
printf("%d\n", ++*(b));/*2�� ���ɴϴ�*/

}