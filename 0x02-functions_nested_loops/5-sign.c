#include <stdio.h>
#include <string.h>
/**
 * print_sign - does some tings
 * @n: The value to print
 *
 * Return: On success 1.
 * On fail, 0 is returned.
 * On something, -1
 */
int print_sign(int n)
{
if (n > 0)
{return (1);
putchar(43);
putchar(10); }
else if (n < 0)
{return (-1);
putchar(45);
putchar(10); }
else
{return (0);
putchar(48);
putchar(10); }}
