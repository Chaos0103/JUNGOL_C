#include<stdio.h>


int main()
{
	double var1, var2;
	char ch;

	scanf("%lf\n%lf\n%c", &var1, &var2, &ch);

	printf("%.2lf\n", var1);
	printf("%.2lf\n", var2);
	printf("%c\n", ch);

	return 0;
}
