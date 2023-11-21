/**
 * _isupper - function 
 * Description: check if character is uppercase or not
 * @c: is a character to be evaluated
 * Return 1 if uppercase else 0 otherwise
 */

#include "main.h"

int _isupper(int c)
{
	if (c >= 'A' && <= 'Z')
		return (1);
	else
		return(0);
}
