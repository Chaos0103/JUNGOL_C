#include<stdio.h>

int main()
{
	double kg;

	scanf("%lf", &kg);

	if (kg <= 50.80)		  printf("Flyweight\n");
	else if (kg <= 61.23)	printf("Lightweight\n");
	else if (kg <= 72.57)	printf("Middleweight\n");
	else if (kg <= 88.45)	printf("Cruiserweight\n");
	else					        printf("Heavyweight\n");

	return 0;
}
