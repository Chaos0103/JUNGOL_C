#include<stdio.h>

int main()
{
	double var1, var2;
	int result1, result2;
	
	scanf("%lf %lf", &var1, &var2);

	result1 = (int)(var1 * var2);
	result2 = (int)var1 * (int)var2;

	printf("%d %d\n", result1, result2);

	return 0;
}
