#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that
 * inserts a new node at a given position.
 * @h: pointer to the first node
 * @idx: a number
 * @n: a number
 * Return: a node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		new_node->next = temp;
		if (temp != NULL)
			temp->prev = new_node;
		temp = new_node;
		return (new_node);
	}
	while (temp != NULL && i < idx)
	{
		i++;
		if (i == idx)
		{
			new_node->prev = temp;
			new_node->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = new_node;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
	}
	free(new_node);
	return (NULL);
}
