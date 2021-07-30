#include<stdio.h>

int Sum(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}
int main()
{
	int num1, num2, num3;
	int arr[3] = { 0, };
	int sum;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d %d", &num1, &num2, &num3);
		arr[0] += num1;
		arr[1] += num2;
		arr[2] += num3;
		sum = Sum(num1, num2, num3);
		printf("%d %d %d %d\n", num1, num2, num3, sum);
	}
	sum = Sum(arr[0], arr[1], arr[2]);
	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], sum);

	return 0;
}
