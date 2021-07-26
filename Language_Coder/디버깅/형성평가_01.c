#include<stdio.h>

int main()
{
	int num1, num2, num3;
	double avg;

	scanf("%d %d %d", &num1, &num2, &num3);

	avg = (num1 + num2 + num3) / 3.0;

	printf("%.1lf\n", avg);

	return 0;
}
