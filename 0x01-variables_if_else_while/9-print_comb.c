#include <stdio.h>
/**
 * main - C programe enterance
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
putchar (i);
putchar (',');
putchar (' ');
}
putchar ('\n');
return (0);
}
