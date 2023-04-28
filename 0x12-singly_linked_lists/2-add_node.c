#include "list.h"

/**
 *add_node - function add note at the beginning of list.t
 * @head: pointer to first node
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nonchar;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);

	for (nonchar = 0; str[nonchar]; nonchar++)
		;

	new->len = nonchar;
	new->next = *head;
	*head = new;

	return (*head);
}
