#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
*
* followed by a new line
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
