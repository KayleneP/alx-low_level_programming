#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: Main does some tings
 * Return: Always 0 (Success)
 */
int main(void)
{int x, y, z;
for (x = 48; x < 56; x++)
{
for (y = x + 1; y < 57; y++)
{
for (z = x + 2; z < 58; z++)
{putchar(x);
putchar(y);
putchar(z);
if (x < 56 && y < 57 && z < 57)
{putchar(44);
putchar(32); }}}}
putchar(10);
return (0); }
