#include<stdio.h>

int Sum(int num)
{
	int sum = 0;
	for (int i = 1; i <= num; i++)
	{
		sum += i;
	}
	return sum;
}
int main()
{
	int num;
	int result;

	scanf("%d", &num);

	result = Sum(num);

	printf("%d\n", result);

	return 0;
}
