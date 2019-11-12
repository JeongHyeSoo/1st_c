#include <stdio.h>

int main(void)
{
	int t, st, i, j;
	int score[1000];
	double avg;

	scanf("%d", &t);


	for (i = 1; i <= t; i++)
	{
		scanf("%d", &st);
		int sum = 0;
		for (j = 0; j < st; j++)
		{
			scanf("%d", &score[j]);
			sum += score[j];
		}
		
		avg = sum / st;
		int p = 0;
		for(int s=0 ; s<st ; s++)
		{
			if (avg < score[s]) 
			{ p++; }
		}


		printf("%.3f%%\n", (double)p/ st*100);

	}
	return 0;
}