#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: input string
 * Return: no return
 */
void print_rev(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
for (int j = i; j > 0; j--)
{
printf("%c", *(s + j));
}
printf("\n");
}
