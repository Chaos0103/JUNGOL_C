#include<stdio.h>

int main()
{
	int num[10];
	int even_sum = 0, odd_sum = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		if ((i + 1) % 2 == 0)
		{
			even_sum += num[i];
		}
		else
		{
			odd_sum += num[i];
		}
	}

	printf("odd : %d\n", odd_sum);
	printf("even : %d\n", even_sum);

	return 0;
}
