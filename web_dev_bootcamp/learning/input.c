#include <stdio.h>

int main(void)
{
	int age;

	/**Print input value
	 */
	printf("Enter input value: ");

	/**
	 * store input from user into a variable with scanf
	 */
	scanf("%d", &age);

	/**
	 * print the value inputed from user with string specifier %d
	 */
	printf("Age = %d\n", age);

	return (0);
}
