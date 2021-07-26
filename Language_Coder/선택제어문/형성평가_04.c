#include<stdio.h>

int main()
{
	int num;

	printf("Number? ");
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		printf("dog\n");
		break;
	case 2:
		printf("cat\n");
		break;
	case 3:
		printf("chick\n");
		break;
	default:
		printf("I don't know.\n");
		break;
	}
	return 0;
}
