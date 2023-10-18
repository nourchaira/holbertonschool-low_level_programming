#include "main.h"
int absolute_value(int num)
{
    if (num < 0) {
        return -num;
    } else {
        return num;
    }
}

int main(void)
{
    int number = -42; // Replace this with any number you want to find the absolute value of
    int abs_value = absolute_value(number);
    printf("Absolute value of %d is: %d\n", number, abs_value);
    return (0);
}
