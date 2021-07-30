#include<stdio.h>

void Matrix(int num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			printf("%d ", i * j);
		}
		printf("\n");
	}
}
int main()
{
	int num;

	scanf("%d", &num);

	Matrix(num);

	return 0;
}
