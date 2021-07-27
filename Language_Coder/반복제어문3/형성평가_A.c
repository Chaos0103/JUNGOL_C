#include<stdio.h>

int main()
{
	int num;
	int var = 1;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			printf("%d ", var);
			var += 2;
			if (var > 10)
				var = 1;
		}
		printf("\n");
	}

	return 0;
}
