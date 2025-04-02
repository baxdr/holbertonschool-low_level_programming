#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the list
 * @idx: Index where the new node should be added
 * @n: Data for the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	/* Insert at beginning if index is 0 */
	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;

	/* If index is out of bounds */
	if (current == NULL)
		return (NULL);

	/* Insert at end if next node is NULL */
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Create and initialize new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;

	/* Update adjacent nodes' pointers */
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
