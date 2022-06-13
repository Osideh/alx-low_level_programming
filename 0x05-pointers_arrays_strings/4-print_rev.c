#include "stdio.h"
/**
 ** print_rev - a funtion that psints a string in reverse
 *
 ** @s: value taken from main
 *
 ** Return: (0)
 *
 */
void print_rev(char *s)
{
int len;
for (len = 0; s[len] != '\0'; len++)
{
}
for (len = len - 1; len >= 0; len--)
{
putchar(s[len]);
}
_putchar('\n');
}
