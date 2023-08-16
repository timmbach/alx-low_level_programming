#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: input number as integer
 *
 * Return: value of last digit as integer
 */
int print_last_digit(int n)
{
int i = n % 10;
if (i < 0)
{
_putchar(i * -1);
return (i * -1);
}
else
{
_putchar(i);
return (i);   
}
}
