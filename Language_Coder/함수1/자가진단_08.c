#include<stdio.h>

void Dan(int num1, int num2)
{
	if (num1 > num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	for (int i = num1; i <= num2; i++)
	{
		printf("== %ddan ==\n", i);
		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %2d\n", i, j, i * j);
		}
		printf("\n");
	}
}
int main()
{
	int start, end;

	scanf("%d %d", &start, &end);

	Dan(start, end);

	return 0;
}
