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
int a, b;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{char c = (a * b) + '0';
_putchar(c);
_putchar(44);
_putchar(32);
_putchar(32); }
_putchar(10); }}
