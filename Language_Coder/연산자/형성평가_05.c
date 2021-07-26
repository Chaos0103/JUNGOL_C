#include<stdio.h>

int main()
{
	int cm1, cm2, kg1, kg2;
	int result;

	scanf("%d %d", &cm1, &kg1);
	scanf("%d %d", &cm2, &kg2);
	
	result = (cm1 > cm2) && (kg1 > kg2) ? 1 : 0;

	printf("%d\n", result);

	return 0;
}
