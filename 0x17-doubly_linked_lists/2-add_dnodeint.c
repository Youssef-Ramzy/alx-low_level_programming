#include "lists.h"
/**
 * add_dnodeint - A function that adds
 * a new node at the beginning of a dlistint_t list.
 * @head: Pointer for the node list
 * @n: the newNode data
 * Return: The address of the newNode
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	if ((*head) != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (*head);
}
