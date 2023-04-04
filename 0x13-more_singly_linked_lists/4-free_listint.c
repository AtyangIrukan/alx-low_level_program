#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *last_node;

	while (head != NULL)
	{
		last_node = head;
		head = last_node->next;
		free(last_node);

	}
}
