#include<stdio.h>

int main()
{
	int num;
	int cnt_3 = 0, cnt_5 = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		if (num % 3 == 0)	cnt_3++;
		if (num % 5 == 0)	cnt_5++;
	}
	
	printf("Multiples of 3 : %d\n", cnt_3);
	printf("Multiples of 5 : %d\n", cnt_5);

	return 0;
}
