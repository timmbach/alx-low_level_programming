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
while (i >= 0)
{
printf("%c", *(s + j));
i--;
}
printf("\n");
}
