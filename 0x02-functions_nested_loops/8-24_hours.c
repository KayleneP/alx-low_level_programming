#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * jack_bauer - does some tings
 * @n: The value to print
 *
 * Return: On success 1.
 * On fail, 0 is returned.
 * On something, -1
 */
void jack_bauer(void)
{
int a, b, c, d, val;
for (a = 48; a < 51; a++)
{
if (a == 50)
{val = 52; }
else
{val = 58 ; }
for (b = 48; b < val; b++)
{
for (c = 48; c < 54; c++)
{
for (d = 48; d < 58; d++)
{_putchar(a);
 _putchar(b);
 _putchar(58);
 _putchar(c);
 _putchar(d);
 _putchar(10); }}}}
