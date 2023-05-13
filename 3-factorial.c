#include "main.h"
#include <stdio.h>
#include "_putchar.c"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int factorial(int n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n <= 1 && n >= 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
    
}