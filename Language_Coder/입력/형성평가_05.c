#include<stdio.h>

int main()
{
	double var, yard = 91.44;

	printf("yard? ");
	scanf("%lf", &var);

	printf("%.1lfyard = %.1lfcm\n", var, var * yard);

	return 0;
}
