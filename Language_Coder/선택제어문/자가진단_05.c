#include<stdio.h>

int main()
{
	double var1, var2;

	scanf("%lf %lf", &var1, &var2);

	if (var1 >= 4.0 && var2 >= 4.0)	
		printf("A\n");
	else if (var1 >= 3.0 && var2 >= 3.0)
		printf("B\n");
	else
		printf("C\n");

	return 0;
}
