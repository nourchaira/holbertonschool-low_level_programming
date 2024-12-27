#include "3-calc.h"
/**
 * get_op_func - Selects the appropriate function to perform the operation.
 * @s: The operator passed as an argument.
 * Return: NULL
 */
int (*get_op_func(char *s))(int, int)
{
    unsigned int i = 0;
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}};

    while (ops[i].op != NULL)
    {
        if (strcmp(s, ops[i].op) == 0)
        {
            return (ops[i].f);
        }
        i++;
    }
    return (NULL);
}
