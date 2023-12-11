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

	if (temp1 == NULL)
		return (NULL);
	new_node->n = n;
	while (idx > 1)
	{
		temp1 = temp1->next;
		idx--;
	}
	temp2 = temp1->next;
	new_node->next = temp2;
	new_node->prev = temp1;
	temp1->next = new_node;
	temp2->prev = new_node;

	return (new_node);
}
