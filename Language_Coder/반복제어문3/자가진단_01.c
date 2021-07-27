#include<stdio.h>

int main()
{
	int num;
	int sum = 0, cnt = 0;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		if (i % 2 == 1)
		{
			sum += i;
			cnt++;
		}
		if (sum >= num)
		{
			printf("%d %d\n", cnt, sum);
			break;
		}
	}
	return 0;
}
