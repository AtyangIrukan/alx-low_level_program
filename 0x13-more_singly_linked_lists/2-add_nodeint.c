#include "lists.h"

/*add_nodeint() is a function that adds a new node at the beginning of a linked list of integers (listint_t)
 * @head: Pointer to a pointer to the head node of the linked list.
 * @n: Integer value to be added as a new node's data.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *put_new_node = malloc(sizeof(listint_t));
	if (put_new_node == NULL)
	{	
		return (NULL);
	}	

	put_new_node->n = n;
	put_new_node->next = *head;
	*head = put_new_node;

	return (put_new_node);
}
