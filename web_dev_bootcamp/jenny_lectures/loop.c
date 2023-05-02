#include <stdio.h>

int main()
{
	int number, a;//declare a variable
	printf("Enter a number:");//print to the screen enter a muber
	scanf("%d",&number);// get the user input 

	

	for(int i = 1;  i<= 100; i++)// a loop that prints number from one till 100
	{
		a = number*i;
		printf("%d * %d = %d\n",number,i,a);
	}

}
