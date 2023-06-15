#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Inserts a new node.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index of the position where the new node should be inserted.
 * @n: Data value of the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 *
 * Description:returns the address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current = *h;

if (idx == 0)
return (add_dnodeint(h, n));
while (idx > 1 && current != NULL)
{
current = current->next;
idx--;
}

if (current == NULL && idx > 0)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = current;
new_node->next = current->next;

if (current->next != NULL)
current->next->prev = new_node;

current->next = new_node;

return (new_node);
}
