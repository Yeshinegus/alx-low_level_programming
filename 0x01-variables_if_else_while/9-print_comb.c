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

for (ch = 48; ch < 58; ch++)
{

putchar (ch);
if (ch != 57)
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
