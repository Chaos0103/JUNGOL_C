#include<stdio.h>

int main()
{
	int num;
	int cnt1 = 1, cnt2 = 0;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - i; j++)
		{
			printf("%d ", cnt1++);
		}
		for (int j = 0; j < 1 + i; j++)
		{
			printf("%c ", 'A' + cnt2++);
		}
		printf("\n");
	}
	return 0;
}
