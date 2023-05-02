#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer to start list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *loop_node = NULL;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		if (current->next >= current)
		{
			loop_node = current->next;
			break;
		}
		current = current->next;
	}
	if (loop_node != NULL)
	{
		printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
		printf("-> ... (loop detected)\n");
		exit(98);
	}
	return (count);
}
