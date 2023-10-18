#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints natural numbers from n to 98
 * @n: Starting number
 *
 * Description: This function prints all natural numbers from
 * the given number n to 98, separated by commas and spaces.
 * Numbers are printed in ascending or descending order
 * based on the input value of n. The function handles both
 * positive and negative integers.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
