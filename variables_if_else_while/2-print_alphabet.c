/**
 * main -  2. I sometimes suffer from insomnia.
 * Description function to prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

#include <stdio.h>
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
