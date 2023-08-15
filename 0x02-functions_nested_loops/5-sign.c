#include "main.h"
/**
 * print_sign - checks the sign of a number
 *
 *@n is a number
 *
 * Return: 1 if positive, 0 if n is zero and 0 if n is negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if ( n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
_putchar('\n');
}
