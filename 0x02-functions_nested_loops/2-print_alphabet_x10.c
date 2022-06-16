#include <stdio.h>
#include <string.h>
/**
 * print_alphabet_x10 - Entry point
 * Description: print_alphabet_x10 does some tings
 * Return: void (Success)
 */
void print_alphabet_x10(void)
{int x, y;
for (y = 0 ; y < 10; y++)
{
for (x = 97; x < 123; x++)
{putchar(x); }
putchar(10); }}
