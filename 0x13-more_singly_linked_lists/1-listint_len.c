#include "lists.h"
/**
 * listint_len - number of elements in a linked listint_t list
 * @h: pointer to node
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
