#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: head of a list.
 * return: count
 */

 size_t listint_len(const listint_t *h);

 {	
	 size_t count = 0;

	 while (h)
	 {
		 h = h->next;
		 count++;
	 }
	 return (count);

 }
