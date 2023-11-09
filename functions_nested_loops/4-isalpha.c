/**
 * _isalpha - 4 is alpha.
 * Description: function to check for alphabetic character
 * @c: the character to check
 *
 * Return: 1 if the character is a letter
 * 0 otherwise
 */

#include "main.h"

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
