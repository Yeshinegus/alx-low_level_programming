#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
char i, j;

for (i = 'a'; i <= 'z'; i++)
putchar (i);
for (j = 'A'; j <= 'Z'; j++)
putchar (j);
putchar ('\n');
return (0);
}
