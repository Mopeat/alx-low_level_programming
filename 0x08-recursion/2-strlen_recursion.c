#include <unistd.h>
#include "main.h"
/**
* _strlen_recursion - function that prints length of a string
* @s: String whose length is printed
* Return: 0
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
	return (0);
else
	return (1 + _strlen_recursion(s + 1));
}
