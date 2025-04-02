#include "lists.h"
/**
 * print_list - print as linked list from list
 * @h: h is the list
 * Return: number of nodes
 *
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");

		printf("[%d] %s\n");
		node++;
		h = h->next;
	}
	return (node);



