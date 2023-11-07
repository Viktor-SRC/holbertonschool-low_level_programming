/**
 * _islower - 3 is lower.
 * Description: function to check if a character is lowercase
 * Return: Always 0 (Success)
 */

#include "main.h"

int _islower(int c);
{

	if(c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}
