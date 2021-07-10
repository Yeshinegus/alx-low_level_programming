/**
 * * _atoi - function with char pointer param
 * *
 * * @s: a char pointer
 * * Return: integer value
 * *
 */
#include <stdio.h>
int _atoi(char *s)
{
	int n, i;

	n = 0;
	for (i = 0; s[i] != '\0'; ++i)
		n = n * 10 + s[i] - '0';
	return (n);
}
