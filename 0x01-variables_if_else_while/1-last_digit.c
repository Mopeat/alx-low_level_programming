#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", last, n, n % 10);
		if (n % 10 > 5)
		{
		printf("greater than 5");
		}
		else if (n % 10 == 0)
		{
		printf("0\n");
		}
		else
		{
		printf("less than 6 but not 0");
		}
		return (0);
}
