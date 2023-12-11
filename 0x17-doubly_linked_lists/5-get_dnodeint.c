#include "lists.h"
/**
 * get_dnodeint_at_index - find the node at index
 * @head: pointer to the first node
 * @index: the pos
 * Return: pointer to the pos node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	if (index < 0)
		return (NULL);
	while (n < index)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		n++;
	}

	return (temp);
}
