/**
 * more_numbers - 2 10 x alphabet.
 * Description: program to print 10 times the alphabet
 * in lowercase
 * Return: Always 0 (Success)
 */

#include "main.h"

void more_numbers(void)
{
	char numbers[] = "01234567891011121314";
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 0; j < 20; j++)
		{
		_putchar(numbers[j]);
		}
		_putchar('\n');
		i++;
		}
}
