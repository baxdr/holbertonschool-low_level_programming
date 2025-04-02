#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index?
 * @h: address of linked list
 * @idx: index to place list
 * @n: value of n
 * Return: return new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new = malloc(sizeof(dlistint_t));
	unsigned int dex = 1;

	if (!new || !h)
		return (NULL);
	new->n = n, new->prev = NULL, new->next = NULL;

	if (!*h)
		return (idx == 0 ? (*h = new, new) : (free(new), NULL));
	if (idx == 0)
		return (new->next = *h, (*h)->prev = new, *h = new, new);

	while (tmp->next && dex != idx)
		tmp = tmp->next, dex++;
	if (dex == idx)
	{
		new->prev = tmp, new->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = new;
		return (tmp->next = new, new);
	}
	return (free(new), NULL);
}
