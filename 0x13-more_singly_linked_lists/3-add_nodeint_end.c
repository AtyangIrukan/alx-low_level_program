#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert in the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *put_new_node, *last_node;

	put_new_node = malloc(sizeof(listint_t));
	if(put_new_node == NULL)
		return (NULL);

	put_new_node->n = n;
	put_new_node->next = NULL;

	if (*head == NULL)
	{
		*head = put_new_node;
		return (put_new_node);
	}

	last_node = *head;
	while (last_node->next)
		last_node = last_node->next;
	last_node->next = put_new_node;
	return (put_new_node);
}
