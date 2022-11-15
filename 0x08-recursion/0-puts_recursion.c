#include <unistd.h>
#include "main.h"
/**
* _puts_recursion - Function that prints string
* @s: string to be printed
* _putchar: function that prints a character
* Return: NULL
*/
void _puts_recursion(char *s)
{
	if (s != '\0')
	{
		_putchar(*s);
		_puts_recursion(*s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

