#include "holberton.h"
#include <stdio.h>
/**
 * main - checking code for ALX school students
 *
 * Return: nothing to return
 *
 */
int main(void)
{
char s[] = "Expect the best. Prepare for the worest. Capitalize on what comes.\n";
char *p;

p = leet(s);
printf("%s", p);
printf("%s", s);

return(0);
}
