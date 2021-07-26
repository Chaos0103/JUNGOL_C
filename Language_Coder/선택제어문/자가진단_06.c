#include<stdio.h>

int main()
{
	char ch;
	int age;

	scanf("%c %d", &ch, &age);

	if (ch == 'M' && age >= 20)
		printf("MAN\n");
	else if (ch == 'F' && age >= 20)
		printf("WOMAN\n");
	else if (ch == 'M')
		printf("BOY\n");
	else
		printf("GIRL\n");

	return 0;
}
