#include<stdio.h>

int main()
{
	int size;
	int num[20];
	
	scanf("%d", &size);

	for (int i = 0; i < size; i++)
	{
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (num[i] > num[j]) 
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", num[i]);
	}

	return 0;
}
