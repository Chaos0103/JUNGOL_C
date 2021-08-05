#include<stdio.h>

int main()
{
	int size;
	int num[40];
	int var;
	int sum1 = 0, sum2 = 0;
	
	scanf("%d", &size);
	for (int i = 0; i < size; i++)
		scanf("%d", &num[i]);
	scanf("%d", &var);

	for (int i = 0; i < size; i++)
	{
		if (var % num[i] == 0)
			sum1 += num[i];
		if (num[i] % var == 0)
			sum2 += num[i];
	}

	printf("%d\n", sum1);
	printf("%d\n", sum2);

	return 0;
}
