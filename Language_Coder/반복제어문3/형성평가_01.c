#include<stdio.h>

int main()
{
	int num;
	int sum = 0;
	int i;
	for (i = 0; i < 20; i++)
	{
		scanf("%d", &num);
		if (num == 0)
			break;
		sum += num;
	}
	printf("%d %d\n", sum, sum / i);

	return 0;
}
