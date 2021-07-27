#include<stdio.h>

int main()
{
	int num1, num2;
	

	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	for (int i = num1; i <= num2; i++)
		printf("%d ", i);

	return 0;
}
