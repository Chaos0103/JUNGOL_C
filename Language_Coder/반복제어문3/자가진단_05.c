#include<stdio.h>

int main()
{
	int num;
	int inum = 0;

	scanf("%d", &num);

	inum = num * 2 - 1;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < inum; j++)
		{
			printf("*");
		}
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		printf("\n");
		inum -= 2;
	}
	return 0;
}
