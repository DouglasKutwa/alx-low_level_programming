#include "main.h"
#include <string.h>

/**
 * factorial - a function that calculates the factorial of a number
 * @n: number to multiply down to 1
 *
 * Return: integer value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
