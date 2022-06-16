#include <stdio.h>
#include <string.h>
/**
 * isalpha - does some tings
 * @c: The value to print
 *
 * Return: On success 1.
 * On fail, 0 is returned.
 */
int _isalpha(int c)
{
if ((c > 64 && c < 91) || (c > 96 && c < 123))
{return (1); }
else
{return (0); }
}
