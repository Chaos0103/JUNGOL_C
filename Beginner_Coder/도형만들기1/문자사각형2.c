#include<stdio.h>

int main()
{
	int length;
	char ch[100][100];
	char input = 'A';
	scanf("%d", &length);

	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			ch[j][i] = input++;
			if (input > 'Z')
				input = 'A';
		}
	}
	
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if (j % 2 == 0)
				printf("%c ", ch[i][j]);
			else
				printf("%c ", ch[length - i - 1][j]);
		}
		printf("\n");
	}

	return 0;
}
