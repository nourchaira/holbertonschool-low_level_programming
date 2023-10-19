#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
    if (n <= 0)
    {
        _putchar('\n'); // If n is 0 or negative, print newline and return
        return;
    }

    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            _putchar(' '); // Print spaces before the diagonal
        }
        _putchar('\\'); // Print diagonal character '\'
        _putchar('\n'); // Move to the next line after printing diagonal character
    }
}
