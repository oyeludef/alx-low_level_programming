#include "main.h"
/**
 * factorial - find factorial of a number
 *
 * @n: the inputed argument
 *
 * Return: the factorial of a given number, -1 for less than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 1)
	{
		return (1);

	}
	return (n * factorial(n - 1));
}
