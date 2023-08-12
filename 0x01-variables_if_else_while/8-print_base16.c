#include <stdio.h>
/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: 0 (success)
 */
int main(void)
{
int i;
char number = '0';
for (i = -1; i < 10; i++)
{
putchar(number);
number++;
}
char letter = 'a';
for (i = 10; i < 16; i++)
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
