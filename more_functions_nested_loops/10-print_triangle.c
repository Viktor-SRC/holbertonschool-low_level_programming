include "main.h"

void print_triangle(int)
{
	int i, j, k;
    for (i = 0; i < size; i++) 
    {
        for (k = 0; k < size - i - 1; k++) 
	{
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }
}
