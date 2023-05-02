#include <stdio.h>

int main(void)
{
	int input;
	printf ("Multiply a number" );
	scanf("%d", &input);

	int number = 10;
	while(number >= 1){
		int m = input * number;
		printf("%d * %d = %d\n", input,number , m);
		number--;
		

	}
	return (0);
		 
			
	      
}
