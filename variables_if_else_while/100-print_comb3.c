/**
 * main - 10. Patience, persistence and perspiration.
 * Description, prints all possible combinations of single-digit numbers
 * Return: Alwayz 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
