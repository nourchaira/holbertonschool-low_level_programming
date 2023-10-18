#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The input integer
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
    int last_digit;

    if (n < 0)
        n = -n;
	else
    last_digit = n % 10;
    _putchar(last_digit + '0');

    return (last_digit);
}
