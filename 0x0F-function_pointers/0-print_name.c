#include "function_pointers.h"

/**
 *print_name - Write a function that prints a name.
 *
 *@name: char pointer
 *
 *@f: pointer
 *
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
