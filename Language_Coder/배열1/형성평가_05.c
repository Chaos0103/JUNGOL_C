#include<stdio.h>

int main()
{
	double weight[6];
	double sum = 0;

	for (int i = 0; i < 6; i++)
	{
		scanf("%lf", &weight[i]);
		sum += weight[i];
	}
	printf("%.1lf\n", sum / 6);

	return 0;
}
