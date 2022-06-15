#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: Main does some tings
 * Return: Always 0 (Success)
 */
int main(void)
{int intType;
long int LIType;
long long int LLIType;
char charType;
float floatType;
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(LIType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(LLIType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0); }
