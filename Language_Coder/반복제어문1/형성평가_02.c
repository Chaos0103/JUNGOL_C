#include<stdio.h>

int main()
{
	int num = 1;
	int oddCnt = 0, evenCnt = 0;
	
	while (num != 0)
	{
		scanf("%d", &num);
		if (num % 2 == 0)	evenCnt++;
		else				oddCnt++;
	}
	printf("odd : %d\n", oddCnt);
	printf("even : %d\n", evenCnt - 1);
	
	return 0;
}
