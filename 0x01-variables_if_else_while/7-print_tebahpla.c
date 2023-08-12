#include <stdio.h>
/**
 * main - Prints reversed alphabet.
 *
 * Return: 0 (success)
 */
int main(void)
{
char letter = 'z';
int i;
for (i = 26; i > 0; i--)
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
