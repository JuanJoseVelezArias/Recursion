#include "main.h"
#include <stdio.h>
#include "_putchar.c"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int c = 0;
int _strlen_recursion(char *s)
{

    if (*s != '\0')
    {
        c++;
        _strlen_recursion(s + 1);
    }
    return c;
}