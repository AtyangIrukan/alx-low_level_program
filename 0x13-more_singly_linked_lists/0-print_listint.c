#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * size_t represent the size of an object
 * print_listint - prints all the elements of a linked list of integers (listint_t) and returns the number of nodes in the list
 *  (h)- a pointer to the head of the linked list
 *
 *  Return- the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
        size_t index = 0;

        while (h != NULL)
        {
                 printf("%d\n", h->n);
                 h = h->next;
                 index++;
        }

        return (index);
}
