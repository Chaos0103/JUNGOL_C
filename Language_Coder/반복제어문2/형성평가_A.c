#include<stdio.h>

int main()
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	for (int i = 1; i < 10; i++)
	{
		if (num1 > num2)
		{
			for (int j = num1; j >= num2; j--)
			{
				printf("%d * %d = %2d   ", j, i, i * j);
			}
			printf("\n");
		}
		else
		{
			for (int j = num1; j <= num2; j++)
			{
				printf("%d * %d = %2d   ", j, i, i * j);
			}
			printf("\n");
		}
	}

	return 0;
}
