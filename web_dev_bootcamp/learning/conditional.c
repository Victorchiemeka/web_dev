#include <stdio.h>

int main(void)
{
	int age;

	printf("Enter your age: ");
	scanf("%d", &age);



	if(age >= 18){
		printf("you are eligble to vote\n");
	}

	else {
		printf("you are not eligble to vote \n");
	
	}


	return (0);

}
