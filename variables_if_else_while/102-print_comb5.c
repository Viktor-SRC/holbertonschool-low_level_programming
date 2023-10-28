/**
 * main - 12. Software is eating the World.
 * Description, prints all possible combinations of single-digit numbers
 * Return: Alwayz 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = k + 1; l <= 9; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					if (i != 9 || j != 8 || k != 9 || l != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
