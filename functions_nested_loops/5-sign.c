/**
 * print_sign - 5 Sign.
 * Description: function to print the sign of a number.
 *@n: the integer to check
 *Return: 1 if n is greater than zero,
 *-1 if n is less than zero,
 *0 otherwise
 */

#include "main.h"

int print_sign(int n)
{
	if(n > 0)
	{
		_putchar('+');
			return (1);
	}
	else if(n < 0)
	{
		_putchar('-');
			return (-1);
	}
	else
	{
		_putchar('0');
			return (0);
	}
}
