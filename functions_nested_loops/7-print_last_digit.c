/**
 * print_last_digit - 7 last digit.
 * Description: function to print the last digit of a number.
 * @n: the integer to check
 * Return: n % 10
 */

#include "main.h"

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;
	{
		_putchar(last_digit + '0');
		return (last_digit);
	}
}