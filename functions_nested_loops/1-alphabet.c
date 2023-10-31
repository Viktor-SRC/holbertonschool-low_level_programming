/**
 * main - 1 I sometimes suffer from insomnia.
 * Description: program to print the alphabet
 * in lowercase
 * Return: Always 0 (Success)
 */

#include "main.h"

void print_alphabet(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(abc[i]);
	}
		_putchar('\n');
}
