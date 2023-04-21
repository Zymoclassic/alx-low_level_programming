#include "variadic_functions.h"

/**
 *sum_them_all - Sum all input parameters
 *
 *@n: constant unsigned integer
 *
 *Return: int sum
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list ap;

	unsigned int x;
	int sum = 0;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	for (x = 0; x < n; x++)
	{
		sum += va_arg(ap, unsigned int);
	}

	va_end(ap);

	return (sum);

}
