/**
 * main prints size of various types
 *
 * Description use printf function 
 * use size of
 *
 * Return: 0 if successful, non-zero otherwise
 */
#include <stdio.h>
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
printf("Size of a double: %zu byte(s)\n", sizeof(double));
return (0);
}
