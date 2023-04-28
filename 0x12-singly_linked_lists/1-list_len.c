#include "lists.h"

/**
 *list_len - function that returns the number of elements
 *@h: singly linked list
 *Return: number of elements in a linked list_t
 */

size_t list_len(const list_t *h)
{
	size_t d = 0;

	while (h != NULL)
	{

		d++;
		h = h->next;

	}
	return (d);
}
