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
{_putchar(43);
return (1); }
else if (n < 0)
{_putchar(45);
return (-1); }
else
{_putchar(48);
return (0); }}
