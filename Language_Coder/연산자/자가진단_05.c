#include<stdio.h>

int main()
{
	int num1, num2;
	int result1, result2;
	scanf("%d %d", &num1, &num2);

	result1 = num1 == num2 ? 1 : 0;
	result2 = num1 != num2 ? 1 : 0;

	printf("%d\n", result1);
	printf("%d\n", result2);

	return 0;
}
