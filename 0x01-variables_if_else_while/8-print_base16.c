#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i;
	char l;

	for (i = 0; i <= 9; i++)
		putchar((i % 10) + '0');

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');
	return (0);
}
