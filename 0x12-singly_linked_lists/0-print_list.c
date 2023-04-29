#include "lists.h"

/**
 * print_list - function that prints all elements of list_t
 * @h: links that are singular
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t d = 0;

        while (h != NULL)
        {
                if (h->str == NULL)
                        printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		d++;
	}
	return (d);
}	
