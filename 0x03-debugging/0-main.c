#include "main.h"

/**
 * main - tests function that prints if integer is negative or positive
 * Return: 0
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
positive_or_negative(n);
return (0);
}
