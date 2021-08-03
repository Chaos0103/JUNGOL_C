#include<stdio.h>

int main()
{
	int height, width;
	int cnt = 1;
	scanf("%d %d", &height, &width);

	for (int i = 0; i < height; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < width; j++)
			{
				printf("%d ", cnt++);
			}
		}
		else
		{
			
			for (int j = 0; j < width; j++)
			{
				printf("%d ", --cnt);
			}
		}
		printf("\n");
		cnt += width;
	}

	return 0;
}
