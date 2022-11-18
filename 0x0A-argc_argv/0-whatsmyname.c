#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: Argument count
* @argv: Pointer to the command line arguments
* Return: Always 0
*/
int main(int argc, char *argv[])
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}
