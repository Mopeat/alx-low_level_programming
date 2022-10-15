#include <stdio.h>
/**
 *
 * main - Alphabets in lower case without e and q
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	int i;
	for (i = 'a'; i<= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		putchar(i);
	}
	putchar('\n');

	return (0);
}
