#include<stdio.h>

void Under(int len, int num[]) 
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (num[i] > num[j])
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		printf("%d ", num[i]);
	}
}

int main()
{
	int len;
	int num[10];
	
	scanf("%d", &len);

	for (int i = 0; i < len; i++)
	{
		scanf("%d", &num[i]);
	}

	Under(len, num);

	return 0;
}
