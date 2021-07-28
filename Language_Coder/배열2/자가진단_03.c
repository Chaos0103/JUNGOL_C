#include<stdio.h>

int main()
{
	int num1 = 100, num2;
	
	scanf("%d", &num2);

	printf("%d ", num1);
	while (1)
	{
		printf("%d ", num2);
		if (num2 < 0)	break;
		int temp = num1 - num2;
		num1 = num2;
		num2 = temp;
	}
	return 0;
}
