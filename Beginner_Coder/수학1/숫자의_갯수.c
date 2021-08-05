#include<stdio.h>

int main()
{
	int num1, num2, num3;
	int result;
	int cnt[10] = { 0, };

	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);

	result = num1 * num2 * num3;

	while (result != 0)
	{
		cnt[result % 10]++;
		result /= 10;
	}
	for (int i = 0; i < 10; i++)
		printf("%d\n", cnt[i]);

	return 0;
}
