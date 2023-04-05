#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -removes the head node from a linked list of type listint_t and returns its data.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *put_new_node;
	int data;

	if (*head == NULL)
		return (0);

	put_new_node = *head;
	*head = put_new_node->next;
	data = put_new_node->n;
	free(put_new_node);
	return (data);
}
