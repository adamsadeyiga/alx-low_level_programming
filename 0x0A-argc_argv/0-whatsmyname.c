#include <stdio.h>
/**
 * main - prints its name followed by a new line
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	// (void) argc - Implicit
	printf("%s\n", argv[0]); // This will print the name of the programe.
	return (0);
}
