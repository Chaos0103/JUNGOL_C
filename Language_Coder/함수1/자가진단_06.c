#include<stdio.h>

int Calculation(int num1, int num2, char ch)
{
	if (ch == '+')
	{
		return num1 + num2;
	}
	else if (ch == '-')
	{
		return num1 - num2;
	}
	else if (ch == '*')
	{
		return num1 * num2;
	}
	else if (ch == '/')
	{
		return num1 / num2;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num1, num2;
	int result;
	char ch;

	scanf("%d %c %d", &num1, &ch, &num2);

	result = Calculation(num1, num2, ch);

	printf("%d %c %d = %d\n", num1, ch, num2, result);

	return 0;
}
