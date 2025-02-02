#include "3-calc.h"
/**
 * main - Entry point for the calculator program
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the command-line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
    int num1, num2;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        return (98);
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    op_func = get_op_func(argv[2]);
    if (op_func == NULL || (argv[2][1] != '\0'))
    {
        printf("Error\n");
        return (99);
    }
    if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
    {
        printf("Error\n");
        return (100);
    }
    printf("%d\n", op_func(num1, num2));
    return (0);
}
