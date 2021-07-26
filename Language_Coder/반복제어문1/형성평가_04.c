#include<stdio.h>

int main()
{
	int num = 1;
	int cnt = 0;
	while (num != 0)
	{
		scanf("%d", &num);
		if (num % 3 == 0 || num % 5 == 0)
			continue;
		else
			cnt++;
		
	}
	printf("%d\n", cnt);

	return 0;
}
