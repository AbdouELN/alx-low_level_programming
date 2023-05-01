#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: pointer to node
 * Return: numbere  of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->next);
		h = h->next;
		i++;
	}
	return (i);
}
