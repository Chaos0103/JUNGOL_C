#include<stdio.h>

int main()
{
	int num1, num2;
	int result1, result2, result3, result4;
	
	scanf("%d %d", &num1, &num2);

	result1 = num1 > num2 ? 1 : 0;
	result2 = num1 < num2 ? 1 : 0;
	result3 = num1 >= num2 ? 1 : 0;
	result4 = num1 <= num2 ? 1 : 0;

	printf("%d > %d --- %d\n", num1, num2, result1);
	printf("%d < %d --- %d\n", num1, num2, result2);
	printf("%d >= %d --- %d\n", num1, num2, result3);
	printf("%d <= %d --- %d\n", num1, num2, result4);

	return 0;
}
