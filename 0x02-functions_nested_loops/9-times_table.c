#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * times_table - does some tings
 * Return: On success 1.
 * On fail, 0 is returned.
 * On something, -1
 */
void times_table(void)
{
int a, b,c, d ;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{c = a * b;
if (b > 0 && c < 10)
{_putchar(44);
_putchar(32);
_putchar(32); }
else if (b > 0 && c > 9)
{_putchar(44);
_putchar(32); }
if (c < 10)
{_putchar(c + 48); }
else
{d = c % 10;
c = (c - d) / 10;
_putchar(c + 48);
_putchar(d + 48); }}
_putchar(10); }}
