#include<stdio.h>

int main()
{
	char ch[10];

	for (int i = 0; i < 10; i++)
	{
		scanf("%c", &ch[i]);
		getchar();
	}
	printf("%c %c %c\n", ch[0], ch[3], ch[6]);
	return 0;
}
