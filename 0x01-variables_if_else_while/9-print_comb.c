#include <stdio.h>
/**
 * main - C programe enterance
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
  char ch;
int i;
for (i = 0; i <= 9; i++)
{
ch = (char)i;
putchar (ch);
putchar (',');
putchar (' ');
}
putchar ('\n');
return (0);
}
