#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: pointer to a pointer to the first element of the list.
 *
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (head != NULL)

	{
		current = *head;
		while ((temp = current) != NULL)
		{

			current = current->next;
			free(temp);

		}
		*head = NULL;

	}

}


