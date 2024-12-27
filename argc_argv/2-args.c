#include "main.h"
/**
 * main - program that prints the number of arguments passed into it
 * @argc: integer
 * @argv: storage
 * Return: 0
 */
int main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
        printf("%s\n", argv[i]);
    return (0);
}
