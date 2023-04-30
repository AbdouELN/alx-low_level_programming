#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: address
 * @str: nod
 * Return: the address of the new element, or NULL if it failed
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_h = malloc(sizeof(list_t));

	if (!head || !new_h)
	{
		return (NULL);
	}
	if (str)
	{
		new_h->str = strdup(str);
		if (new_h->str)
		{
			free(new_h);
			return (NULL);
		}
		new_h->len = _strlen(new_h->str);
	}
	new_h->next = *head;
	return (new_h);
}
