#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 * @n: number to be checked
 * Return: 1 and prints + if n is greater than zero,
 *         0 and prints 0 if n is zero,
 *        -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return 0;
	}
	else
	{
		putchar('-');
		return (-1);
	}
}

int main(void)
{
	int number = 42; // Replace this with any number you want to test
	int result = print_sign(number);
	printf("\nResult: %d\n", result);
	return (0);
}
