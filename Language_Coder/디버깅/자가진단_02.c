#include<stdio.h>

int main()
{
	int num1, num2;
	int result1;
	double result2;
	
	scanf("%d %d", &num1, &num2);

	result1 = num1 / num2;
	result2 = (double)num1 / num2;

	printf("%d %.2lf\n", result1, result2);

	return 0;
}
