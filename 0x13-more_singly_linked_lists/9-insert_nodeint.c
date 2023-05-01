#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @idx: indepx
 * @head: pointer to node
 * @n: number
 * Return: the address of the new node, or NULL if it failed
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_n = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !new_n)
	{
		return (NULL);
	}
	new_n->n  = n;
	new_n->next = NULL;
	if (!idx)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			new_n->next = node->next;
			node->next = new_n;
			return (new_n);
		}
		i++;
		node = node->next;
	}
	free(new_n);
	return (NULL);
}
