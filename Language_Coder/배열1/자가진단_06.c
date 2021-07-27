#include<stdio.h>

int main()
{
	int num[10];
	int min = 1000;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		if (min > num[i])
			min = num[i];
	}

	printf("%d\n", min);

	return 0;
}
