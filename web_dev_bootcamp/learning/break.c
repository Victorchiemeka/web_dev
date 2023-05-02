#include <stdio.h>

int main(void)
{
	while(1){
	  int number ;
	  printf("Enter a number: ");
	  scanf("%d", &number);

	
	  if(number <= 0){
	     break;
	   }

	  if((number %2) != 0){
	      continue;
	  
	  }
	  printf("%d", number);
		
	
	}

	return(0);
}
