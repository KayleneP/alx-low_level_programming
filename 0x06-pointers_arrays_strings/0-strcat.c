#include <stdio.h>
#include <string.h>
#include <_putchar.h>
/**
 * main - Entry point
 * Description: Main does some tings
 * Return: Always 0 (Success)
 */
int main()
{
	char src[] = "World Here";
	char dest[DEST_SIZE] = "Hello";
	strncat(dest, src, 5);
	printf(dest);
	return 0;
}
