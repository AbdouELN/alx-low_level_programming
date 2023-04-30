#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: pointer node head
 *
 *
 */
void free_list(list_t *head)
{
	list_t *node, *next_n;

	if (!head)
	{
		return;
	}
	node = head;
	while (node)
	{
		next_n = node->next;
		free(node->str);
		free(node);
		node = next_n;
	}
}
