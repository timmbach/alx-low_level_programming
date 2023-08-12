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
char letter = 'a';
for (i = 0; i < 10; i++)
{
putchar(number);
number++;
}
for (i = 10; i < 16; i++)
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
