#include<stdio.h>

int main()
{
	int score[11] = { 0, };
	int i, num;

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &num);
		if (num == 0) break;
		score[num / 10]++;
	}
	for (int i = 10; i >= 0; i--)
	{
		if (score[i] != 0)
		{
			printf("%d : %d person\n", i * 10, score[i]);
		}
	}

	return 0;
}
