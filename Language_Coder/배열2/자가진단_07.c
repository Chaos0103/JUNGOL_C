#include<stdio.h>

int main()
{
	int num[5][5];

	for (int i = 0; i < 5; i++)
	{
		num[0][i] = 1;
	}
	for (int i = 0; i < 5; i++)
	{
		num[i][0] = 1;
	}
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			num[i][j] = num[i - 1][j] + num[i][j - 1];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", num[i][j]);
		}
		printf("\n");
	}
	return 0;
}
