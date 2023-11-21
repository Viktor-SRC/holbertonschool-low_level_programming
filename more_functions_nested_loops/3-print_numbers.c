#include "main.h"

void print_numbers(void)
{
	char numbers[] = "0123456789";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(numbers[i]);
	}
		_putchar('\n');
}
