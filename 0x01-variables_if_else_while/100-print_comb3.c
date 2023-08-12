#include <stdio.h>
/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: 0 (success)
 */
int main(void)
{
int i, e;
i = 48;
e = 48;
while (i < 58)
{
while (e < 58)
{
putchar(i);
putchar(e);
if (i == 57 && e == 57)
{
break;
}
putchar(',');
putchar(' ');
i++;
}
e++;
}
putchar('\n');
return (0);
}
