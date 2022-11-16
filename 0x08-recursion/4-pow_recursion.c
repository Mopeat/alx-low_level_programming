#include <unistd.h>
#include "main.h"

/**
* _pow_recursion - The function that returns the value of x
* raised to the power of y
* @x: The index number
* @y: The power of the index
* Return: 0 on success
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
