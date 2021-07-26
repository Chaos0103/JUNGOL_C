#include<stdio.h>

int main()
{
	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

	printf("sum : %d\n", num1 + num2 + num3);
	printf("avg : %d\n", (num1 + num2 + num3) / 3);

	return 0;
}
