#include<stdio.h>

int main()
{
	int num;
	int tri[10][10] = { 0, };
	
	scanf("%d", &num);

	tri[0][0] = 1;
	tri[1][0] = 1;
	tri[1][1] = 1;
	for (int i = 0; i < num; i++)
	{
		tri[i][0] = 1;
		tri[i][i] = 1;
		for (int j = 1; j < i; j++)
		{
			tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j];
		}
	}
	for (int i = num - 1; i >= 0; i--)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("%d ", tri[i][j]);
		}
		printf("\n");
	}
	return 0;
}
