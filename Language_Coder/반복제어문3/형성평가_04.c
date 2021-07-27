#include<stdio.h>

int main()
{
	int num;
	int cnt;
	int blank;
	
	scanf("%d", &num);

	cnt = num * 2 - 1;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < cnt; j++)
		{
			printf("*");
		}
		printf("\n");
		cnt -= 2;
	}
	cnt += 4;
	blank = num - 2;
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < blank; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < cnt; j++)
		{
			printf("*");
		}
		printf("\n");
		cnt += 2;
		blank--;
	}
	return 0;
}
