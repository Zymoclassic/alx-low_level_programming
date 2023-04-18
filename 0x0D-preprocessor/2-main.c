#include <stdio.h>
/**
 *main - print the name of the file it was compiled from
 *
 *Return: the name of the file
 */
int main()
{
	printf("%s\n", __FILE__);
	return (0);
}
