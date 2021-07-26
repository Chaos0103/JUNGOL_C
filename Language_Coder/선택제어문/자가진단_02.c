#include<stdio.h>

int main()
{
	int cm, kg;
	int result;

	scanf("%d %d", &cm, &kg);

	result = kg + 100 - cm;

	printf("%d\n", result);
	if (result > 0)
		printf("Obesity\n");

	return 0;
}
