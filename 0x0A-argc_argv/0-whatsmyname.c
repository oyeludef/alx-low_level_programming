#include "main.h"
#include <stdio.h>
/**
  * main - program that prints its name
  *
  * @argv: array of listed comman
  *
  * @argc: Argc argument
  *
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
