#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: integer
 * @argv: string
 * Return: 0,1
 */
int main(int argc, char *argv[])
{
    int x, y, mul;

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }
    x = atoi(argv[1]);
    y = atoi(argv[2]);
    mul = x * y;
    printf("%i\n", mul);
    return (0);
}
