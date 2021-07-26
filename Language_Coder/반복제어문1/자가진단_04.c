#include<stdio.h>

int main()
{
	int num = 0;
	int cnt = 0;
	int sum = 0;

	while (num < 100)
	{	
		scanf("%d", &num);
		sum += num;
		cnt++;
	}
	printf("%d\n", sum);
	printf("%.1lf\n", (double)sum / cnt);

	return 0;
}
