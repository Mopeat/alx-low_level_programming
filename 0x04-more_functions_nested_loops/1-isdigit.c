#include <unistd.h>
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the digit to be checked
 * Return: Always return 1 on success and 0 otherwise
 */
int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

