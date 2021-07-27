#include<stdio.h>

int main()
{
	int num;
	int blank, star;
	
	scanf("%d", &num);

	blank = (num - 1) * 2;
	star = 1;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < blank; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < star; j++)
		{
			printf("*");
		}
		printf("\n");
		blank -= 2;
		star += 2;
	}

	return 0;
}
