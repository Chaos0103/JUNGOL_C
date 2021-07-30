#include<stdio.h>

int Square(int num, int x)
{
	int result = 1;

	for (int i = 0; i < x; i++)
	{
		result *= num;
	}
	return result;
}
int main()
{
	int num1, num2;
	int result;

	scanf("%d %d", &num1, &num2);

	result = Square(num1, num2);

	printf("%d\n", result);

	return 0;
}
