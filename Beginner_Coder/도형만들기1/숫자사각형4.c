#include<stdio.h>

void PrintCase1(int length)
{
	for (int i = 1; i <= length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
}
void PrintCase2(int length)
{
	for (int i = 0; i < length; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 1; j <= length; j++)
			{
				printf("%d ", j);
			}
		}
		else
		{
			for (int j = length; j > 0; j--)
			{
				printf("%d ", j);
			}
		}
		printf("\n");
	}
}
void PrintCase3(int length)
{
	int cnt;
	for (int i = 1; i <= length; i++)
	{
		cnt = i;
		for (int j = 0; j < length; j++)
		{
			printf("%d ", cnt);
			cnt += i;
		}
		printf("\n");
	}
}
int main()
{
	int length, printCase;

	scanf("%d %d", &length, &printCase);

	switch (printCase)
	{
	case 1:
		PrintCase1(length);
		break;
	case 2:
		PrintCase2(length);
		break;
	case 3:
		PrintCase3(length);
		break;
	}

	return 0;
}
