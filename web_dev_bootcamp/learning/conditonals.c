#include <stdio.h>

int main(void)
{
	int number;

	printf("enter number:");
	
	scanf("%d", &number);

	if(number > 0) {
		printf("The number is postive\n");
	}

	else if(number < 0) {
		printf("the number is negative\n");
	}
	
	else if (number == 0){
		printf("number is zero\n");
	}


	return (0);
}
