#include <stdio.h>

int main(void)
{
	int i = 0 ,  j;

	while(i < 6)
	{
		j = 0;
		while (j < 5)
		{
			printf("2 ");
			j++;
		
		}
		j = 0;
		while (j <= 3)
		{
			printf("#");
			j++;
		}
		
		printf("\n");
		i++;

	}

	
     return(0);
}
