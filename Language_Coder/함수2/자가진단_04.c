#include<stdio.h>
#include<math.h>

double R(int volume)
{
	double result;
	result = volume / 3.14;
	return sqrt(result);
}
int main()
{
	int volume;
	double result;

	scanf("%d", &volume);

	result = R(volume);

	printf("%.2lf\n", result);

	return 0;
}
