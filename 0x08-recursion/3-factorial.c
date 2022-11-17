#include <unistd.h>
#include "main.h"

/**
* factorial - function that returns the factorial of a given number
* @n: number to whose factorial to be returned
* Return: On success, 0
*/

int factorial(int n)
{
if (n < 0)
	return (-1);
if (n == 0)
	return (1);
else
	return (n * factorial(n - 1));
}