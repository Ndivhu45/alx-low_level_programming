#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: head of a list.
 * data to insert in the new element.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *current_node = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	current_node = *head;
	if (*head == NULL)

	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;

		current_node->next = newNode;
	}

	return (*head);
}
