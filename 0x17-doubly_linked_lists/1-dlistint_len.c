#include "lists.h"
/**
 * dlistint_len - pirnt every element
 * @h: pointer to the head
 * Return: number of element
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *temp = NULL;

	temp = h;
	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
