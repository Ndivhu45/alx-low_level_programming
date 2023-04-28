#include "lists.h"

/**
 *add_node_end - funtion that add node to the end
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t nonchar;
	size_t len = strlen(str);

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	for (nonchar = 0; str[nonchar]; nonchar++)
	new->str = strdup(str);

	temp = *head;
	new->len = nonchar;
	new->next = NULL;

	if (temp == NULL)
		{
		*head = new;
		return(*head);
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}



