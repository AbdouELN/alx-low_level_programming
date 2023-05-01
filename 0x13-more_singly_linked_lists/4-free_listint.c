#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to node
 */
void free_listint(listint_t *head)
{
	listint_t *nod;

	while (head)
	{
		nod = head;
		head = head->next;
		free(nod);
	}
}
