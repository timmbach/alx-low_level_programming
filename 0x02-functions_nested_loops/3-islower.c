#include "main.h"
/**
 * _islower - Checks if letter c is lowercase
 *
 * @c: The character in ASCII code
 *
 * Return: 1 if c is lowercase and 0 if c is not lowercase
 */
int _islower(int c)
{
if (c < 97 || c > 122)
{
return (0);
}
else
{
return (1);
}
}
