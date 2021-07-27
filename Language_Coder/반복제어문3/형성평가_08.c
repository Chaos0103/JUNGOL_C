#include<stdio.h>

int main()
{
	int num;
	int cnt = 1;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i * 2; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < num - i; j++)
		{
			printf("%d ", cnt++);
		}
		printf("\n");
	}

	return 0;
}
