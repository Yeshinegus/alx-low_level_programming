#include <stdio.h>
/**
 * main - C programe enterance
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
char i, j;
for (i = 48; i < 58; i++)
{

for (j = i; j < 58; j++)
{
  if( i != j && i < j)
    {
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
   
   }
    }
}
putchar('\n');
return (0);
}
