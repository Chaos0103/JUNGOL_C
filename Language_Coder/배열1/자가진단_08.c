#include<stdio.h>

int main()
{
	int num[10];
	int even_sum = 0, odd_sum = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		if ((i + 1) % 2 == 1)
		{
			odd_sum += num[i];
		}
		else
		{
			even_sum += num[i];
		}
	}

	printf("sum : %d\n", even_sum);
	printf("avg : %.1lf\n", (double)odd_sum / 5);

	return 0;
}
