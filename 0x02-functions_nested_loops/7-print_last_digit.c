#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_last_digit - does some tings
 * @n: The value to print
 *
 * Return: On success 1.
 * On fail, 0 is returned.
 * On something, -1
 */
int print_last_digit(int n)
{n = n % 10;
int f;
f = n+48;
_putchar(f);
return (n); }
