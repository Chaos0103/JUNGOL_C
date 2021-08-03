#include<stdio.h>

int main()
{
	int length;
	int cnt;
	scanf("%d", &length);

	for (int i = 1; i <= length; i++)
	{
		cnt = i;
		for (int j = 0; j < length; j++)
		{
			printf("%d ", cnt);
			cnt += length;
		}
		printf("\n");
	}

	return 0;
}
