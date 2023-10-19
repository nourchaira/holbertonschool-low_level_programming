#include "main.h"

/**
 * print_square - Prints a square of a given size using '#'
 * @size: Size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n'); // If size is 0 or negative, print newline and return
		return;
	}

	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#'); // Print '#' to form the square
		}
		_putchar('\n'); // Move to the next line after printing each row
	}
}
