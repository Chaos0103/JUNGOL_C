#include<stdio.h>

int main()
{
	int size, num;
	int sum = 0;
	double avg;

	scanf("%d", &size);

	for (int i = 0; i < size; i++)
	{
		scanf("%d", &num);
		sum += num;
	}
	avg = (double)sum / size;

	printf("%.2lf\n", avg);
	return 0;
}
