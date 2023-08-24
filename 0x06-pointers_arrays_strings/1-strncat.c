#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination string.
 * @src: source string
 * @n: max number of bytes from src.
 * Return: a pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (*(dest + i) != '\0')
{
i++;
}
while (j < n)
{
*(dest + i) = *(src + j);
if (*(src + j) == '\0')
break;
i++;
j++;
}
return (dest);
}
