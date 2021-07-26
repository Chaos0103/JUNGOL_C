#include<stdio.h>

int main()
{
	double var1, var2, var3;
	int sum, avg;

	scanf("%lf %lf %lf", &var1, &var2, &var3);

	sum = (int)var1 + (int)var2 + (int)var3;
	avg = (int)((var1 + var2 + var3) / 3.0);

	printf("sum %d\n", sum);
	printf("avg %d\n", avg);

	return 0;
}
