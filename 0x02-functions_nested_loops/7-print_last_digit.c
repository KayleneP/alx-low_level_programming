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
{int f;
if (n < 0)
{n += 1;
n *= -1;
n = n % 10;
n += 1}
n = n % 10;
f = n + 48;
_putchar(f);
return (n); }
