#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	struct list_t *ptr = h;

	whiel(ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
