#include<stdio.h>

int main()
{
	int num[10];
	int min = 10000;
	int max = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		if (min > num[i] && num[i] >= 100)
			min = num[i];
		if (max < num[i] && num[i] < 100)
			max = num[i];
	}
	if (max == 0)	max = 100;
	if (min == 10000)	min = 100;
	printf("%d %d\n", max, min);

	return 0;
}
