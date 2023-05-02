#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for(i = 1; i <= 5; i++)
	{
		for(j = 1; j <= 8; j++)
		{
			printf("#");
			j= j-1;
		}
		printf("\n");
	}
}
