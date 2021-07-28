#include<stdio.h>

int main()
{
	int num[10];

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (num[i] > num[j])
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}
