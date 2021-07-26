#include<stdio.h>

int main()
{
	int num = 1;
	
	

	while (num!=0)
	{
		printf("number? ");
		scanf("%d", &num);
		if (num > 0)
			printf("positive integer\n");
		else if(num<0)
			printf("negative number\n");
	}

	return 0;
}
