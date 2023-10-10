#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: Pointer to the head of the list.
 * @n: The data value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 *
 * Description: This function creates a new node with the specified data value
 * and adds it at the beginning of the doubly linked list. The head pointer is
 * updated to point to the new node, and the new node's `next` and `prev`
 * pointers are appropriately set.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;

if (*head != NULL)
(*head)->prev = new_node;

*head = new_node;

return (new_node);
}