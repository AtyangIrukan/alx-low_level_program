#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *put_new_node;
	listint_t *last_node = *head;

	put_new_node = malloc(sizeof(listint_t));
	if (put_new_node)
		return (NULL);

	put_new_node->n = n;
	put_new_node->next = NULL;

	if (*head == NULL)
	{
		*head = put_new_node;
		return (put_new_node);
	}

	while (last_node->next)
		last_node = last_node->next;

	last_node->next =put_new_node;

	return (put_new_node);
}
