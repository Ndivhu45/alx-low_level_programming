#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list at a position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode;
	listint_t *current = *head;

	if (current == NULL)
		return (NULL);

	if (idx != 0)
	{
		while (current != NULL && i < idx - 1)
		{
			current = current->next;
			i++;
		}
		newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = current->next;
		current->next = newNode;
	}
	return (newNode);
}

