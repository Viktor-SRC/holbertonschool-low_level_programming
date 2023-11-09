/**
 * times_table - 9 Times table.
 * Description: function to print the 9 times table,
 * starting with 0.
 * Retur: void
 */

#include "main.h"

void times_table(void)
{
	int i,j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int product = i * j;
			if (product < 10)
			{
				_putchar('0' + product);
			}
			else
			{
		_putchar('0' + product / 10);
		_putchar('0' + product % 10);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
}
}
