#include <stdio.h>

int main(void)
{
	while(1){

	  int number;

	  printf("Enter a negative odd number:");
	  scanf("%d", &number);

	  if(number > 0){
		printf("postive value\n");
	        break;	
	  	
	  }

	  if((number % 2) == 0){
	  	printf("negative even\n");
		
	  
	  }
	  else{
	   printf("%d\n", number);
	  }


	
	}

 return(0);
	
}
