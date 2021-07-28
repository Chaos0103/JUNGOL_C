#include<stdio.h>

int main()
{
	int score[5][4];
	int avg[5] = { 0, };
	int cnt = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
			avg[i] += score[i][j];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (avg[i] / 4 >= 80)
		{
			printf("pass\n");
			cnt++;
		}
		else
		{
			printf("fail\n");
		}
	}
	printf("Successful : %d\n", cnt);
	return 0;
}
