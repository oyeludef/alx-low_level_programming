#include "main.h"
#include <stdio.h>
/**
 * main - print the number of passed arguments.
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	argc--;
	printf("%d\n", argc);
	return (0);
}
