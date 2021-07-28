#include<stdio.h>

int main()
{
	char ch[100];
	int i;

	for (i = 0; i < 100; i++)
	{
		scanf("%c", &ch[i]);
		getchar();
		if ('A' > ch[i] || ch[i] > 'Z')	 break;
	}
	for (int j = 0; j < 26; j++)
	{
		int cnt = 0;
		for (int k = 0; k < i; k++)
		{
			if (ch[k] == 'A' + j) 
			{
				cnt++;
			}
		}
		if (cnt != 0)
		{
			printf("%c : %d\n", 'A' + j, cnt);
		}
	}
	return 0;
}
