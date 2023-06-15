#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 *
 * Description: This function prints all the elements of a doubly linked list
 * starting from the head. It also counts the number of nodes in the list and
 * returns the count.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
