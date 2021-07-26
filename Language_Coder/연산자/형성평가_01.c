#include<stdio.h>

int main()
{
	int kor, math, eng, com;

	scanf("%d %d %d %d", &kor, &math, &eng, &com);

	printf("sum %d\n", kor + math + eng + com);
	printf("avg %d\n", (kor + math + eng + com) / 4);

	return 0;
}
