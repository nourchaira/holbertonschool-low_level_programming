#include "main.h"
/**
 *isnumber - check if number
 *@argc: integer
 *@argv: string
 * Return: 0,1
 */
int isnumber(int argc, char *argv[])
{
    int x, y;

    for (x = 1; x < argc; x++)
    {
        y = 0;
        while (argv[x][y] != '\0')
        {
            if ((argv[x][y] < 47) || (argv[x][y] > 58))
            {
                return (0);
            }
            y++;
        }
    }
    return (1);
}
/**
 * main - Entry point
 *@argc: int
 *@argv: string
 * Return: 0,1
 */
int main(int argc, char *argv[])
{
    int i;
    int sum = 0;

    if (isnumber(argc, argv) == 0)
    {
        printf("Error\n");
        return (1);
    }
    else
    {
        for (i = 1; i < argc; i++)
        {
            sum = sum + atoi(argv[i]);
        }
        printf("%d\n", sum);
        return (0);
    }
}
