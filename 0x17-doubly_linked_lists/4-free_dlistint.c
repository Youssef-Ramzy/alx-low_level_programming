#include "lists.h"
/**
 * free_dlistint - Free the list
 * @head: Pointer to the first node
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
