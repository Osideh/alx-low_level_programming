#include "stdio.h"
/**
 * * main - Print the word "_putchar"
 *
 * *
 *
 * * Return: Always 0 (Success)
 *
 **/
int main(void)
{
int i;
char p[] = "putchar";
for (i = 0; i < 9; i++)
{
putchar(p[i]);
}
putchar('\n');
return (0);
}
