#include<stdio.h>

int main()
{
	int num[5];

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
	}

	printf("%d\n", num[0] + num[2] + num[4]);

	return 0;
}
