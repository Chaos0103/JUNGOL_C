#include<stdio.h>

int main()
{
	int num;
	int cnt = 1, sum = 0;
	scanf("%d", &num);

	while (cnt <= num)
	{
		sum += cnt++;
	}
	printf("%d\n", sum);

	return 0;
}
