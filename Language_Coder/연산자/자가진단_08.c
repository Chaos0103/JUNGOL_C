#include<stdio.h>

int main()
{
	int num1, num2, num3;
	int result1, result2;

	scanf("%d %d %d", &num1, &num2, &num3);

	result1 = (num1 > num2) && (num1 > num3) ? 1 : 0;
	result2 = (num1 == num2) && (num1 == num3) ? 1 : 0;

	printf("%d %d\n", result1, result2);

	return 0;
}
