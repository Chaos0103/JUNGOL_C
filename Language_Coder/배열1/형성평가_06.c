#include<stdio.h>

int main()
{
	char ch[6] = { 'J','U','N','G','O','L' };
	char find;

	scanf("%c", &find);

	for (int i = 0; i < 6; i++)
	{
		if (ch[i] == find)
		{
			printf("%d\n", i);
			break;
		}
		if (i == 5)
		{
			printf("none\n");
		}
	}
	return 0;
}
