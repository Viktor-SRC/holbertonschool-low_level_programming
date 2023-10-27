/**
 * main - 3. alphABET.
 * Description prints tha alphabet in lowercase and uppercase,
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
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
