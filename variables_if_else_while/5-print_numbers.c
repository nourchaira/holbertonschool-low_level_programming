#include <stdio.h>
int main(void)
{
    int digit;

    for (digit = 0; digit <= 9; digit++)
    {
        putchar(digit + '0'); // Convert digit to character and print
    }

    putchar('\n'); // Print a new line
    return 0;
}
