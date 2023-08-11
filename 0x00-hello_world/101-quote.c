#include <unistd.h>
#include <string.h>
/**
 * main - entry point
 * Return: 1 (error)
 */
int main(void)
{
const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
size_t length = strlen(message);
write(2, message, length);
return 1;
} 
