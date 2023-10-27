/**
 * main -  7. Smile in the mirror.
 * Description function to prints the alphabet in lowercase,
 * in reverse, followed by a new line
 * Return: Always 0 (Success)
 */

#include <stdio.h>
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
