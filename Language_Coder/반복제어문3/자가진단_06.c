#include<stdio.h>

int main()
{
	int num;
	int cnt = 0;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - i; j++)
		{
			printf("%c", 'A' + cnt++);
		}
		printf("\n");
	}
	return 0;
}
