#include<stdio.h>

int main()
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	for (int i = 1; i <= num1; i++)
	{
		for (int j = 1; j <= num2; j++)
		{
			printf("%d ", i * j);
		}
		printf("\n");
	}

	return 0;
}
