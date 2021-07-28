#include<stdio.h>

int main()
{
	int cnt[6] = { 0, };
	int num;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		cnt[num - 1]++;
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%d : %d\n", i + 1, cnt[i]);
	}
	return 0;
}
