#include<stdio.h>

int main()
{
	int num;

	scanf("%d", &num);

	for (int i = 1; i <= 10; i++)
	{
		if (i * num > 100) break;
		printf("%d ", num * i);
		if ((num * i) % 10 == 0) break;
	}

	return 0;
}
