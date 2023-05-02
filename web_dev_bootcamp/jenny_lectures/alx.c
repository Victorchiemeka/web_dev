#include <stdio.h>

/**
 * main - this program prints  alphabet in lowercase, and then in uper
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z' ; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
		putchar('\n');
	
}
