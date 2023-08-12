#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints the alphabet.
 *
 * Return: 0 (success)
 */
int main(void)
{
char letter = 'a';
int i;
for (i = 0; i < 26; i++)
{
putchar(letter);
letter++;
}
for (i = 0; i < 26; i++)
{
putchar(toupper(letter));
letter++
}
putchar('\n');
return (0);
}
