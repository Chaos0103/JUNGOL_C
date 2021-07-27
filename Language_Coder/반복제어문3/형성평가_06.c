#include<stdio.h>

int main()
{
	int num;
	int blank, var, star;
	scanf("%d", &num);

	blank = num * 2 - 2;
	star = 1;
	for (int i = 0; i < num; i++)
	{
		var = 1;
		for (int j = 0; j < blank; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < star; j++)
		{
			printf("%d ", var++);
		}
		printf("\n");
		star++;
		blank -= 2;
	}

	return 0;
}
