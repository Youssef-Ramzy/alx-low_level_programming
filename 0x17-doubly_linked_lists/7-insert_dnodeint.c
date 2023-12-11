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
	dlistint_t *temp1 = *h;
	dlistint_t *temp2;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		new_node->next = temp1;
		if (temp1 != NULL)
			temp1->prev = new_node;
		temp1 = new_node;
		return (new_node);
	}
	while (temp1 != NULL && i < idx)
	{
		i++;
		if (i == idx)
		{
			new_node->prev = temp1;
			new_node->next = temp1->next;
			if (temp1->next != NULL)
				temp1->next->prev = new_node;
			temp1->next = new_node;
			return (new_node);
		}
		temp1 = temp1->next;
	}
	free(new_node);
	return (NULL);
}
