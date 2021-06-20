#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
char i, j;
for (i = '0'; i <= '9'; i++)

putchar (i);
for (j = 'a'; j <= 'f'; j++)
putchar (j);
printf ("\n");
return (0);
}
