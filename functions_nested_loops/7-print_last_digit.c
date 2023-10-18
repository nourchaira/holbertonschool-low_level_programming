#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The input integer
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
    long num = n; // Convert to long to handle INT_MIN properly
    int last_digit;

    if (num < 0)
        num = -num;

    last_digit = num % 10;
    _putchar(last_digit + '0');

    return last_digit;
}
