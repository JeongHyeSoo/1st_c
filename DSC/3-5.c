#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, k,j, x, y, z;
	int count = 0;
	scanf("%d", &i);
	for (j = 1; j <= i; i++)

	if (i < 10)
	{
	
	count++;
	}
	else if (i < 100)
	{
			count++;
	}
	else if (i < 1000)
	{
		z = i % 10;
		x = i / 100;
		k = i % 100;
		y = k / 10;

		if (y - z == x - y)
			count++;
	}
	printf("%d", count);
	system("pause");
}