#include "lists.h"
/**
 * print_dlistint - pirnt every element
 * @h: pointer to the head
 * Return: number of element
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *temp = NULL;

	temp = h;
	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n++;
	}
	return (n);
}
