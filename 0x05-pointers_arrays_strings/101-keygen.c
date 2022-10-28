#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * randomPasswordGeneration - Function to randomly
 * generates password of length N
 * @N: length of the password
 * Return: void
 */

void randomPasswordGeneration(int N)
{
	/* Initialize counter*/
	int i = 0;

	int randomizer = 0;

	srand((unsigned int)(time(NULL)));

	/* Array of numbers*/
	char numbers[] = "0123456789";

	/* Array of small alphabets*/
	char letter[] = "abcdefghijklmnoqprstuvwyzx";

	/* Array of capital alphabets*/
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";

	/* Array of all the special symbols*/
	char symbols[] = "!@#$^&*?";

	/* Stores the random password*/
	char password[N];

	/* To select the randomizer*/
	/* inside the loop*/
	randomizer = rand() % 4;

	/* Iterate over the range [0, N]*/
	for (i = 0; i < N; i++)
	{

		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}


int main(void)
{
	/* Length of the password to be generated*/
	int N = 10;

	/* Function Call*/
	randomPasswordGeneration(N);

	return (0);
}