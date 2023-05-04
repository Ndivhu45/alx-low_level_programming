#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: head of a list.
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h);
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
