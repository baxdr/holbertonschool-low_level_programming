#include "lists.h"
/**
 * list_len - number of element
 * @h: list
 * Return: return number of element
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
