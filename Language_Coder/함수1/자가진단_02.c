#include<stdio.h>

void Circle(int r)
{
	printf("%.2lf\n", r * r * 3.14);
}
int main()
{
	int num;

	scanf("%d", &num);

	Circle(num);

	return 0;
}
