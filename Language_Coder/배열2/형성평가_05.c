#include<stdio.h>

int main()
{
	int sum[4] = { 0, };
	int score;

	for (int i = 0; i < 4; i++)
	{
		printf("%dclass? ", i + 1);
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &score);
			sum[i] += score;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%dclass : %d\n", i + 1, sum[i]);
	}
	return 0;
}
