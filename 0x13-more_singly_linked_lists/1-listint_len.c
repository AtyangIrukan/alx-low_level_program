#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t index = 0;
	const listint_t *arr = h;

	while (arr != NULL)
	{
		index++;
		arr = arr->next;
	}

	return (index);
}
