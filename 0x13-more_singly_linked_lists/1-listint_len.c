#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int ctr = 0;

	tp = h;
	while (tp)
	{
		ctr++;
		tp = tp->next;
	}
	return (ctr);
}
