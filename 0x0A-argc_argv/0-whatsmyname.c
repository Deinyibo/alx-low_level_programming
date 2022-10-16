#include <stdio.h>

/**
 * main - write the program that prints its name, followed by a new line.
 * if you rename the program, it will print the new name, without having to
 * compile it again
 * You should not remove the path before the name of the program
 *
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
