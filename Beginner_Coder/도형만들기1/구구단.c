#include<stdio.h>

int main()
{
	int start, end;

	while (1)
	{
		scanf("%d %d", &start, &end);
		if ((2 <= start && start <= 9) && (2 <= end && end <= 9))
			break;
		printf("INPUT ERROR!\n");
	}
	if (start < end)
	{
		for (int i = 1; i < 10; i++)
		{
			for (int j = start; j <= end; j++)
			{
				printf("%d * %d = %2d   ", j, i, i * j);
			}
			printf("\n");
		}
	}
	else
	{
		for (int i = 1; i < 10; i++)
		{
			for (int j = start; j >= end; j--)
			{
				printf("%d * %d = %2d   ", j, i, i * j);
			}
			printf("\n");
		}
	}
}
