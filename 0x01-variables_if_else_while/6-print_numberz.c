#include <stdio.h>

/**
 * main - Print the first 10 digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	int i;

	for (i = 0; i <= 9; i++)
	putchar((i % 10) + '0');
	
	putchar('\n');
	return (0);
}
