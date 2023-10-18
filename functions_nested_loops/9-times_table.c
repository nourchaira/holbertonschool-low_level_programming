#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, col, result;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0'); /* Print first element without comma */
		for (col = 1; col <= 9; col++)
		{
			_putchar(','); /* Print comma before other elements */
			_putchar(' ');

			result = row * col;

			if (result < 10)
			{
				_putchar(' '); /* Extra space for single-digit numbers */
			}
			else
			{
				_putchar(result / 10 + '0'); /* Tens digit */
			}

			_putchar(result % 10 + '0'); /* Ones digit */
		}
		_putchar('\n'); /* New line after each row */
	}
}
