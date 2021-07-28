#include<stdio.h>

void Matrix(int n) 
{
	int cnt = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", cnt++);
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
