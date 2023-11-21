/**
 *print_most_numbers - function to print numbers from 0 to 9
 *except 2 and 4
 *Description: print from 0 to 9 except 2 and 4
 *return: void
 */

#include "main.h"

void print_most_numbers(void)
{
	char numbers[] = "01356789";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(numbers[i]);
	}
	_putchar('\n');
}
