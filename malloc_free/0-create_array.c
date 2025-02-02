#include "main.h"
/**
 * create_array - creates an array of chars
 * @c : char
 * @size : size of the ar
 * Return: 0,n
 */
char *create_array(unsigned int size, char c)
{
    char *n = malloc(size);

    if (size == 0 || n == 0)
        return (0);
    while (size--)
        n[size] = c;
    return (n);
}
