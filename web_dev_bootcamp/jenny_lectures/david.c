#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int n;
	char n;

	do
	{
		printf("Enter a number: ");
		scanf("%d %c", &n);
	}
	while(n < 1);

	for(int i =0; i < n; i++)
	{
		for(int j = 0 ; j < n; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}
