#include<stdio.h>

int main()
{
	int num1, num2;
	int sum = 0, cnt = 0;
	double avg;

	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	for (int i = num1; i <= num2; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
			cnt++;
		}
			
	}
	avg = (double)sum / cnt;

	printf("sum : %d\n", sum);
	printf("avg : %.1lf\n", avg);
	return 0;
}
