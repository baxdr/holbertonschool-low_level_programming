#include "lists.h"
/**
 * add_node - insert new node
 * @str: value of new node
 * @head: pointer of pointer to head linked list
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
