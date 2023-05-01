#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to node
 * @n: integer of new node
 * Return: the address of the new element, or NULL if it failed
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n = malloc(sizeof(listint_t));

	if (!head || !new_n)
	{
		return (NULL);
	}
	new_n->next = NULL;
	new_n->n = n;
	if (*head)
	{
		new_n->next = *head;
	}
	*head = new_n;
	return (new_n);
}