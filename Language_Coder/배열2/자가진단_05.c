#include<stdio.h>

int main()
{
	int num1[2][4], num2[2][4];

	printf("first array\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &num1[i][j]);
		}
	}
	printf("second array\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &num2[i][j]);
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", num1[i][j] * num2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
