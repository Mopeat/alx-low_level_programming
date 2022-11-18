#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: Counts number of arguments pass to a program
* @argv: Pointer to the array of arguments
* Return: Always 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
