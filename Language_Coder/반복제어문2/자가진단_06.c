#include<stdio.h>

int main()
{
	int size, score;
	int sum = 0;
	double avg;

	scanf("%d", &size);

	for (int i = 0; i < size; i++)
	{
		scanf("%d", &score);
		sum += score;
	}
	avg = (double)sum / size;

	printf("avg : %.1lf\n", avg);
	if (avg >= 80)	printf("pass\n");
	else			printf("fail\n");

	return 0;
}
