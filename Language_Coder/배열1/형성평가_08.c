#include<stdio.h>

int main()
{
	int num[100];
	int sum = 0, cnt = 0;
	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] == 0) break;
		if (num[i] % 5 == 0)
		{
			cnt++;
			sum += num[i];
		}
	}
	printf("Multiples of 5 : %d\n", cnt);
	printf("sum : %d\n", sum);
	printf("avg : %.1lf\n", (double)sum / cnt);

	return 0;
}
