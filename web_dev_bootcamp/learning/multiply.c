#include <stdio.h>

int main(void)
{ 
	int number;

	printf("Enter a number:");
	scanf("%d", &number);


	int count = 1;

	while(count < 10){
		int m = number * count;
		printf("%d * %d = %d\n", number , count ,m);
		count ++;
	
	}
	
	return (0);
}
