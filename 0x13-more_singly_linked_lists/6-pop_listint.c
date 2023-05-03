#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 * @head: pointer to the first element in the linked list
 *
 * Return: The head node's data (n), or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (0);

	head_node = (*head)->n;
	current = *head;
	*head = (*head)->next;
	free(current);

	return (head_node);
}
