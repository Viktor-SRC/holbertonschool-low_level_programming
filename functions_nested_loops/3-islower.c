/**
 * _islower - 3 is lower.
 * Description: function to check if a character is lowercase
 * @c: the character to check
 *
 * Return: 1 if the character is lowercase,
 * 0 otherwise
 */

#include "main.h"

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
