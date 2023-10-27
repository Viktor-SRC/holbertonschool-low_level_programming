/**
 * main 8. Hexadecimal.
 * Description, prints all the numbers of base 16
 * in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	int n;
	
	for (n + 0; n < 16; n++)
	{
		if (n<10)
			putchar('0' + n );
		else
			putchar('a' + n - 10);
	}

	putchar('\n');

	return (0);
}
