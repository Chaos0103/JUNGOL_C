#include<stdio.h>

int main()
{
	int num = 0;

	while (num != -1)
	{
		scanf("%d", &num);
		if (num % 3 == 0)
			printf("%d\n", num / 3);
	}
	
	return 0;
}
