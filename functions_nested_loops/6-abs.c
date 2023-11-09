/**
 * _abs - 6 abs.
 * Description: function to computes tha absolute value of an integer.
 * @n: the integer to check
 * Return: always 0
 */

#include "main.h"

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
