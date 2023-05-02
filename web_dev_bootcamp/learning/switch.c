#include <stdio.h>

int main(void)
{
	int number;
	printf("enter the number between 1 to 7");
	scanf("%d", &number);

	switch(number) {
		case 1:
		printf("sunday");
		break;

		case 2:
		printf("Monday");
		break;

		case 3:
		printf("Tuesday");
		break;

		case 4:
		printf("Wednesday");
		break;

		case 5:
		printf("thursday");
		break;

		case 6:
		printf("Friday");
		break;

		case 7:
		printf("saturday");
		break;

		default:
		printf("Invalid number");
	}

  return (0);
}
