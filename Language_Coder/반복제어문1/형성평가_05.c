#include<stdio.h>

int main()
{
	int base, height;
	char ch;

	while (1)
	{
		printf("Base = ");
		scanf("%d", &base);
		printf("Height = ");
		scanf("%d", &height);
		printf("Triangle width = %.1lf\n", (base * height) / 2.0);
		printf("Continue? ");
		scanf(" %c", &ch);
		getchar();
		if (ch == 'Y' || ch == 'y')
			continue;
		else
			break;
	}

	return 0;
}
