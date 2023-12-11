#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a
 * given position in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (*head == NULL)
		return (-1);

	dlistint_t *current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
