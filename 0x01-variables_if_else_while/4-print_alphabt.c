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
char i;

for (i = 'a'; i <= 'z'; i++)
{
if (i == 'e' || i == 'q')
continue;
else
putchar (i);
}
putchar ('\n');
return (0);
}
