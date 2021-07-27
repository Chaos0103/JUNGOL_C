#include<stdio.h>

int main()
{
	int num;
	int cnt1 = 0, cnt2 = 0;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - i; j++)
		{
			printf("%c ", 'A' + cnt1++);
		}
		for (int j = 0; j < i; j++)
		{
			printf("%d ", cnt2++);
		}
		printf("\n");
	}

	return 0;
}
