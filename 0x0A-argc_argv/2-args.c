#include <stdio.h>
#include "main.h"
/**
 * main - prints all received arguments
 *
 * @argc: number of command line arguments and size of argv array
 *
 * @argv: An array of size argc
 *
 * Return: always 0(success)
 */

int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
	{
	printf("%s\n", argv[a]);
	}

	return (0);
}
