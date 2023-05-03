#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: head of a list
 * @index: index of the list where the node is deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *previous, *next;

	if (*head == NULL)
		return (-1);

	current = *head;
	previous = NULL;

	if (index != 0)
	{

		for (i = 0; i < index - 1 && current != NULL; i++)
		{
			previous = current;
			current = current->next;
		}

	}

	if (previous == NULL && index != 0)
	{
		return (-1);
	}

	next = current->next;

	if (index != 0)

	{
		previous->next = next;
		free(current);
	}
	else
	{
		free(current)
		* head = next;
	}
	return (1);
}
