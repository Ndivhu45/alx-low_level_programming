#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of a list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *c;

	p = NULL;
	c = NULL;

	while (*head != NULL)
	{
		c = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = c;
	}

	*head = p;
	return (*head);
}
