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
			ch[length - 1 - j][length - 1 - i] = input++;
			if (input > 'Z')
				input = 'A';
		}
	}
	
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{	
			printf("%c ", ch[i][j]);
		}
		printf("\n");
	}

	return 0;
}
