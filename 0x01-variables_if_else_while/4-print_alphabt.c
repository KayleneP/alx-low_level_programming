#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: Main does some tings
 * Return: Always 0 (Success)
 */
int main(void)
{int x;
for (x = 97; x < 123; x++)
{if (x != 101 && x != 113)
{putchar(x); }}
putchar(10);
return (0); }
