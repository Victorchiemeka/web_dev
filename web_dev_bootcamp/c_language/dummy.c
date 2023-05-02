#include <stdio.h>

int main()
{
	int a;

	printf("Enter an integer");
	scanf("%d", &a);

	printf("you typed %d\n", a );
	if (a > 5)
	{
		printf("%d is greater than 5.\n", a);
	}
	else
	{
		printf("%d is not greater than 5\n", a);
	}

	return (0);
}
