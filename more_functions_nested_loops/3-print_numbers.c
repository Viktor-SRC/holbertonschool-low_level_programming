/**
 *print_numbers - function to print numbers from 0 to 9
 *Description: print from 0 to 9
 *return: void
 */

#include "main.h"

void print_numbers(void)
{
	char numbers[] = "0123456789";
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(numbers[i]);
	}
		_putchar('\n');
}
