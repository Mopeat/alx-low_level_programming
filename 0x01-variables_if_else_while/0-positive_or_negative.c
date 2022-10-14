#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * picking random numbers
 *
 * main - print if the number is positive or negative
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
