#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head:pointer
 * @index:the index
 *
 * Return: pointer to node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
