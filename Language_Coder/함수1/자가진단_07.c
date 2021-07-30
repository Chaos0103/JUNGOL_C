#include<stdio.h>

void Result(int* ptr1, int* ptr2)
{
	if (*ptr1 < *ptr2)
	{
		*ptr2 /= 2;
		*ptr1 *= 2;
	}
	else
	{
		*ptr1 /= 2;
		*ptr2 *= 2;
	}
}
int main()
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	Result(&num1, &num2);

	printf("%d %d\n", num1, num2);

	return 0;
}
