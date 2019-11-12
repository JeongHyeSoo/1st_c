#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	printf("1부터 600사이의 정수를 입력하시오: ");
	scanf("%d", &num);

	if (num >= 0 && num <= 200)
		printf("num은 0과 200사이에 있습니다.\n");
	else if (num >= 201 && num < 400)
		printf("num은 201과 400사이에 있습니다.\n");
	else if (num >= 401 && num < 600)
	{
		if (num == 444)
			printf("444!\n");
	printf("num은 401과 600사이에 있습니다.\n");
	}
else
			printf("0과 600사이의 정수가 아닙니다.\n");
	system("pause");
}