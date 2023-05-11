#include "main.h"

/**
 * factorial - returns a factorial of the number
 * @n: the number to return a factorial
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
