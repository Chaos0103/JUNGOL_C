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
		for (int i = start; i <= end; i++)
		{
			for (int j = 1; j < 10; j++)
			{
				printf("%d * %d = %2d   ", i, j, i * j);
				if (j % 3 == 0)
					printf("\n");
			}
			printf("\n");
		}
	}
	else
	{
		for (int i = start; i >= end; i--)
		{
			for (int j = 1; j < 10; j++)
			{
				printf("%d * %d = %2d   ", i, j, i * j);
				if (j % 3 == 0)
					printf("\n");
			}
			printf("\n");
		}
	}
}
