#include<stdio.h>

int main()
{
	int num[100];
	int min, max;
	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] == 999)	break;
		if (i == 0)
		{
			min = num[i];
			max = num[i];
		}
		if (min > num[i])
		{
			min = num[i];
		}
		if (max < num[i])
		{
			max = num[i];
		}
	}

	printf("max : %d\n", max);
	printf("min : %d\n", min);

	return 0;
}
