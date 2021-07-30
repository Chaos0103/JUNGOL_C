#include<stdio.h>

int Sub(int num1,int num2)
{
	if (num1 < num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	return num1 * num1 - num2 * num2;
}
int main()
{
	int num1, num2;
	int result;

	scanf("%d %d", &num1, &num2);

	result = Sub(num1, num2);

	printf("%d\n", result);

	return 0;
}
