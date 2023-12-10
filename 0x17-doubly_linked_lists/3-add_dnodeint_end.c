#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end of the list
 * @head: pointer to the first node
 * @n: data to the last node
 * Return: pointer to the new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = temp;
	temp->prev = last;

	return (temp);
}
