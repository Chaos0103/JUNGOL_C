#include<stdio.h>

int main()
{
	int num = 0;
	int sum = 0, i = 0;

	for (i = 0;; i++)
	{
		scanf("%d", &num);
		if (num < 0 || 100 < num) break;
		sum += num;
	}
	printf("sum : %d\n", sum);
	printf("avg : %.1lf\n", (double)sum / i);

	return 0;
}
