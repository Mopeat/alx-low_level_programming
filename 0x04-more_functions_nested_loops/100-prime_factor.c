#include <stdio.h>
#include <math.h>

/**
  * main - Prints the largest prime factor of the number 612852475143
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	long x, maxFac;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			maxFac = number / x;
		}
	}

	printf("%ld\n", maxFac);

	return (0);
}
