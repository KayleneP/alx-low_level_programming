#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: Main does some tings
 * Return: Always 0 (Success)
 */
int main(void)
{int x, y, a, b, val;
for (x = 48; x < 58; x++)
{
for (y = 48; y < 57; y++)
{
for (a = 48; a < 58; a++)
{
if (x == a)
{val  = y + 1; }
else
{val  = 48; }
for (b = val; b < 58; b++)
{putchar(x);
putchar(y);
putchar(32);
putchar(a);
putchar(b);
if (x < 58 && y < 56)
{putchar(44);
putchar(32); }}}}}
putchar(10);
return (0); }
