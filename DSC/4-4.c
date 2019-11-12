#include <stdio.h>
#include <stdlib.h>
int main()
{
	int s[3][5] = { {170,163,150,180,175},{163,152,182,149,178},{190,185,176,160,155} };
	int shortest[3];
	int i, j, st = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i][j] < s[i][st])
			{
				st = j;
			}
		}
		shortest[i] = s[i][st];
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d반의 제일 작은 키는 %d이다.\n", i + 1, shortest[i]);
		//세 반에서 가장 작은 사람을 출력해라
		//과제 백준 4344
	}
	system("pause");
}