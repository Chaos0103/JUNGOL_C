#include<stdio.h>

int main()
{
	int num[100];
	int i;

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] == -1) break;
	}

	for (int j = 3; j > 0; j--)
	{
		if ((i - j) >= 0)
			printf("%d ", num[i - j]);
	}

	return 0;
}
