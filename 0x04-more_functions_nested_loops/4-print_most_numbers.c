#include "main.h"

/**
 * print_most_numbers - entry point of the function
 *
 * Description: Prints the number characters with _putchar
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number == '2' || number == '4')
			;
		else
			_putchar(number);
	}
	_putchar('\n');
}
