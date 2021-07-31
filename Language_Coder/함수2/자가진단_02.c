#include<stdio.h>

void Print(int month, int day)
{
	int arr[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	if (day > arr[month - 1] || day <= 0)
	{
		printf("BAD!\n");
	}
	else
	{
		printf("OK!\n");
	}
}
int main()
{
	int month, day;

	scanf("%d %d", &month, &day);

	Print(month, day);

	return 0;
}
