#include<stdio.h>

int main()
{
	int num, numcnt;
	int cnt = 0;

	scanf("%d %d", &num, &numcnt);

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
			cnt++;
		if (cnt == numcnt)
		{
			printf("%d\n", i);
			break;
		}
	}
	if (cnt != numcnt)
		printf("0\n");

	return 0;
}
