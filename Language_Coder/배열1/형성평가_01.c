#include<stdio.h>

int main()
{
	char ch[10];

	for (int i = 0; i < 10; i++)
	{
		scanf("%c", &ch[i]);
		getchar();
	}
	for (int i = 9; i >= 0; i--)
	{
		printf("%c ", ch[i]);
	}

	return 0;
}
