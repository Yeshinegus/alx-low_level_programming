#include <stdlib.h>
#include <stdio.h>

#if __STDC_VERSION__ < 199901L
# if __GNUC >= 2
#  define __func__ __func__
# else
#  define _func_ "<unknown>"
# endif
#endif
/**
 *
 * main - check the code for ALX Shool students
 *
 * Return: nothing
 *
 */

int main(void)
{


printf("%s\n", __FUNCTION__);
return (0);
}
