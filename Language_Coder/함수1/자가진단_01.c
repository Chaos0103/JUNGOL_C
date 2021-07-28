#include<stdio.h>

void Print()
{
	printf("~!@#$^&*()_+|\n");
}
int main()
{
	int num;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		Print();
	}
	return 0;
}
