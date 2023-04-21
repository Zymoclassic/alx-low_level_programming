#include "variadic_functions.h"

/**
 *print_strings -Print the strings
 *@separator: String inbetween integers
 *@n: Number of args
 *
 *Return return type
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int x;
	char *args;

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		args = va_arg(ap, char*);

		if (args)
		{
			printf("%s", args);
		}
		else
		{
			printf("(nil)");
		}

		if (x < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}

	putchar('\n');

	va_end(ap);
}
