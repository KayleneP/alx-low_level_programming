#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: Main does some tings
 * Return: Always 0 (Success)
 */
int main(void)
{int x, y;
for (x = 48; x < 57; x++)
{
for (y = x - 1; y < 58; y++)
{putchar(x);
putchar(y);
if (x < 57 && y < 57)
{putchar(44);
putchar(32); }}}
putchar(10);
return (0); }
