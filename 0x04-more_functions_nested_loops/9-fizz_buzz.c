#include <stdio.h>
/**
 * main - Entry point
 * Description: program that prints form 0 to 100
 * Return: Always return zero
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("%s ", "FizzBuzz");
			continue;
		}
		else if (x % 5 == 0)
		{
			printf("%s ", "Buzz");
			continue;
		}
		else if (x % 3 == 0)
		{
			printf("%s ", "Fizz");
			continue;
		}
		else
		{
		printf("%d ", x);
		}
	}
	printf("\n");
	return (0);
}

