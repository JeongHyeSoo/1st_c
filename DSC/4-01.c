#include <stdio.h>
#include <stdlib.h>
int compute_sum(int n);


int main()
{
	int n, sum;
	scanf("%d", &n);

	sum = compute_sum(n);
	// 여기서 i는 지역변수(함수안에있는 함수가 끝나면 메모리에 가지고있는 값 반환, 소멸) 전역변수( 


	printf("1부터 %d까지의 합은 : %d\n",n,sum);
	system("pause");
	return 0;
}

int compute_sum(int n)
{
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += i;
	}
	return result;
}