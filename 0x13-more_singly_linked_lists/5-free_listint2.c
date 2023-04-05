#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list of type listint_t and sets the head pointer to NULL
 * @head: Address of the first node of a list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *put_new_node;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		put_new_node = (*head)->next;
		free(*head);
		*head = put_new_node;
	}
}
