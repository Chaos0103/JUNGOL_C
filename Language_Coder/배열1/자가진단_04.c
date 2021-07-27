#include<stdio.h>

int main()
{
	int num[100];
	int i;

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] == 0) break;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d ", num[j]);
	}
	return 0;
}
