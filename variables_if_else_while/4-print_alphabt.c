/**
 * main -  4. When I was having that alphabet soup.
 * Description function to prints the alphabet in lowercase,
 * except 'q' and 'e'
 * followed by a new line
 * Return: Always 0 (Success)
 */

#include <stdio.h>
int main(void)
{
	char ch;
	
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	if (ch != 'q' && ch != 'e')
	{
		putchar(ch);
	}
	}
	putchar('\n');
	return (0);
}
