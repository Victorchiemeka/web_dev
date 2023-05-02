#include <stdio.h>

int add(int, int);

int main(void)
{
	int m = 20, n = 30, sum;

	sum = add(m,n);
	printf("sum is %d\n", sum);

}

int add(int a , int b)
{
	int sum;
	sum = a +b;
	return (sum);
}
