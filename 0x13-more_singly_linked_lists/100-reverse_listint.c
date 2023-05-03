#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @head: pointer to head of list
 * Return: head of list
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (!head || !*head)
	{
		return (NULL);
	}
	node = *head;
	*head = NULL;
	while (node)
	{
		node = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}
	return (*head);
}
