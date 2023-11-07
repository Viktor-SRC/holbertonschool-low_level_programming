/**
 * print_alphabet_x10 - 2 10 x alphabet.
 * Description: program to print 10 times the alphabet 
 * in lowercase
 * Return: Always 0 (Success)
 */

#include "main.h"

void print_alphabet_x10(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 0; j < 26; j++)
		{
		_putchar(abc[j]);
		}
		_putchar('\n');
		i++;
		}
}
