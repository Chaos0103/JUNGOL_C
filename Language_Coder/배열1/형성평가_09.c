#include<stdio.h>

int main()
{
	int num[100];
	int i;
	for (i = 0; i < 100; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] == 0)	break;
	}

	printf("%d\n", i);
	
	for (int j = 0; j < i; j++)
	{
		if (num[j] % 2 == 0)
		{
			printf("%d ", num[j] / 2);
		}
		else
		{
			printf("%d ", num[j] * 2);
		}
	}
	

	return 0;
}
