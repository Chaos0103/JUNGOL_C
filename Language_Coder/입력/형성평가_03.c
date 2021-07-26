#include<stdio.h>

int main()
{
	int num;
	double var;
	num = 50;
	var = 100.12;

	printf("%.2lf * %d = %.0lf\n", var, num, var * num);
	return 0;
}
