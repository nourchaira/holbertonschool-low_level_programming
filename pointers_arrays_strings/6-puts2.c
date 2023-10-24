#include "main.h"

/**
 * print_every_other - Prints every other character of a string.
 * @str: The input string.
 */
void print_every_other(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
