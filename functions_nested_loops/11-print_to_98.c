/**
 * print_to_98 - 11 Battery Street.
 * Description: function to prints all natural numbers from
 * n to 98
 * @n: first number to print
 *
 * return: void
 */

#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
				if (n != 98)
				{
					printf(", ");
				}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
