#include<stdio.h>

int Max(int a, int b, int c)
{
	int max = a > b ? a : b;
	max = max > c ? max : c;
	return max;
}
int main()
{
	int num1, num2, num3;
	int max;

	scanf("%d %d %d", &num1, &num2, &num3);

	max = Max(num1, num2, num3);

	printf("%d\n", max);

	return 0;
}
