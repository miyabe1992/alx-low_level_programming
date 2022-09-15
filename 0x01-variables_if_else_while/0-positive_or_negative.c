#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/***
* main - print is the number is positive, zero, or negative
* Description: prints  if a number is positive or negative.
* * Return: 0
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
	printf("%i is negative\n", n);
	}
	return (0);
}
