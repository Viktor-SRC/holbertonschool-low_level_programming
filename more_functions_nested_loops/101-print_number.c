/**
 * print_number - print number
 * Description - print number
 * @n: the number to print
 * Return: always 0
 */

#include "main.h"

void print_number(int n)
{
	unsigned int number;

	if (n < 0)
	{
		_putchar('-');
		number = -n;
	}
	else
	{
		number = n;
	}
	if (number / 10)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + '0');
}
