#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
int a,b,c,d;
for (a = 48; a <= 50; a++)
{
for (b = 48; b <= 51; b++)
{
for (c  = 48; c <= 53; c++)
{
for (d = 48; d <= 57; d++)
{
 if(b > 51 || c > 53)
 break;
_putchar(a);
_putchar(b);
_putchar(58);
_putchar(c);
_putchar(d);
_putchar('\n');
}
}
}
}
}