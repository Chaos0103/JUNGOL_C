#include<stdio.h>

int main()
{
	double avg[6] = { 85.6, 79.5, 83.1, 80.0, 78.2, 75.0 };
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	printf("%.1lf\n", avg[num1 - 1] + avg[num2 - 1]);

	return 0;
}
