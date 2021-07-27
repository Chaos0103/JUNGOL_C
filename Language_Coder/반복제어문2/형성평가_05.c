#include<stdio.h>

int main()
{
	int num;
	int odd_cnt = 0, even_cnt = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		if (num % 2 == 0)
			even_cnt++;
		else
			odd_cnt++;
	}
	printf("even : %d\n", even_cnt);
	printf("odd : %d\n", odd_cnt);

	return 0;
}
