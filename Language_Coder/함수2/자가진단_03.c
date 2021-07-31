#include<stdio.h>

int PrintInt(int num1, int num2)
{
	int a = num1 < 0 ? -1 * num1 : num1;
	int b = num2 < 0 ? -1 * num2 : num2;
	if (a > b)
		return num1;
	else
		return num2;
}
double PrintDouble(double var1, double var2)
{
	double a = var1 < 0 ? -1 * var1 : var1;
	double b = var2 < 0 ? -1 * var2 : var2;
	if (a < b)
		return var1;
	else
		return var2;
}
int main()
{
	int num1, num2, resultInt;
	double var1, var2, resultDouble;

	scanf("%d %d", &num1, &num2);
	scanf("%lf %lf", &var1, &var2);

	resultInt = PrintInt(num1, num2);
	resultDouble = PrintDouble(var1, var2);

	printf("%d\n", resultInt);
	printf("%.2lf\n", resultDouble);

	return 0;
}
