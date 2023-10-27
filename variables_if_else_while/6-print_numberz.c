/**
 * main - 6. Numberz.
 * Description prints all single digit numbers of base 10,
 * starting from 0, followed by a new line
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}

	putchar('\n');

	return (0);
}
