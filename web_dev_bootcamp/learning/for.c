#include <stdio.h>

int sqaure(int i){
	

	printf("Enter a number");
        scanf("%d", &i);

	int value = i * i;
        return value;





}


int main() {

	int result = sqaure(2);
	printf("sqaure is = %d\n", result);

	



	return 0;
}
