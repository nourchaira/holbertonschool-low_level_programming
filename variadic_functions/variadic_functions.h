#ifndef __VARIADIC_FUNCTIONS__
#define __VARIADIC_FUNCTIONS__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct types
{
    char type;
    void (*function)( va_list);
} types_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

#endif
